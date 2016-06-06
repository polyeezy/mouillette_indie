#include <map>
#include <vector>
//
#include <ctime>
#include <sys/time.h>
#include <irrlicht.h>
#include "driverChoice.h"

enum
  {
    ID_IsNotPickable = 0,
    IDFlag_IsPickable = 1 << 0,
    IDFlag_IsHighlightable = 1 << 1
  };

using namespace irr;
class MyEventReceiver : public IEventReceiver
{
public:
  // This is the one method that we have to implement                                                          
  virtual bool OnEvent(const SEvent& event)
  {
    // Remember whether each key is down or up                                                           
    if (event.EventType == irr::EET_KEY_INPUT_EVENT)
      KeyIsDown[event.KeyInput.Key] = event.KeyInput.PressedDown;

    return false;
  }

  // This is used to check whether a key is being held down                                                    
  virtual bool IsKeyDown(EKEY_CODE keyCode) const
  {
    return KeyIsDown[keyCode];
  }

  MyEventReceiver()
  {
    for (u32 i=0; i<KEY_KEY_CODES_COUNT; ++i)
      KeyIsDown[i] = false;
  }

private:
  // We use this array to store the current state of each key                                                  
  bool KeyIsDown[KEY_KEY_CODES_COUNT];
};

long          diff_millis(struct timeval start, struct timeval end)
{
  long  mtime, seconds, useconds;

  seconds  = end.tv_sec  - start.tv_sec;
  useconds = end.tv_usec - start.tv_usec;
  mtime = ((seconds) * 1000 + useconds/1000.0) + 0.5;
  return mtime;
}

bool	isOnStartLine(core::vector3df pos)
{
  if ((pos.X <= 5.0 && pos.X >= 0.0)
      && (pos.Z >= 90.0 && pos.Z <= 130.0))
      return true;
  return false;
}

int main()
{
  // create device
  MyEventReceiver receiver;
  IrrlichtDevice* device = createDevice(video::EDT_OPENGL,
					core::dimension2d<u32>(1024, 768), 16, false, false, false, &receiver);

  if (device == 0)
    return 1; // could not create selected driver.

  video::IVideoDriver* driver = device->getVideoDriver();
  scene::ISceneManager* smgr = device->getSceneManager();
  gui::IGUIEnvironment* env = device->getGUIEnvironment();
  gui::IGUIFont* font = env->getFont("../../media/fonthaettenschweiler.bmp");

  //---------CAR  
  scene::IMesh* mesh = smgr->getMesh("../../media/Ford-GT.obj");
  if (!mesh)
    {
      mesh->drop();
      return 1;
    }
  //
  scene::IMeshSceneNode* car = smgr->addMeshSceneNode(mesh);
  if (car)
    {
      car->setPosition(core::vector3df(20,30,110));
      car->setRotation(core::vector3df(0, 270, 0));
      car->setScale(core::vector3df(1.2, 1.2, 1.3));
      car->setMaterialFlag(video::EMF_LIGHTING, false);
    }
  //------------



  //---------CAR  _  2
  scene::IMesh* Cmesh = smgr->getMesh("./Avent.obj");
  if (!Cmesh)
    {
      Cmesh->drop();
      return 1;
    }
  //
  scene::IMeshSceneNode* car_2 = smgr->addMeshSceneNode(Cmesh);
  if (car_2)
    {
      car_2->setPosition(core::vector3df(0,30,100));
      car_2->setRotation(core::vector3df(0, 180, 0));
      car_2->setScale(core::vector3df(3, 3, 3));
      car_2->setMaterialFlag(video::EMF_LIGHTING, false);
    }
  //------------


  //------------MAP  
  scene::IAnimatedMesh* mesh_map = smgr->getMesh("./Stuff/track3.obj");
  scene::ISceneNode* skydome=smgr->addSkyDomeSceneNode(driver->getTexture("../../media/skydome.jpg"),16,8,0.95f,2.0f);
  if (!mesh_map)
    {
      mesh_map->drop();
      return 1;
    }
  //
  scene::IMeshSceneNode* map = smgr->addOctreeSceneNode(mesh_map->getMesh(0), 0, IDFlag_IsPickable);
  if (map)
    {
      map->setPosition(core::vector3df(-50,-10,0));
      map->setRotation(core::vector3df(0,180,0));
      map->setMaterialFlag(video::EMF_LIGHTING, false);
      map->setScale(core::vector3df(1.5, 1.5, 1.5));
    }
  //---------------



  //------------COLLISION
  scene::ITriangleSelector* selector = 0;

  if (map)
    {
      selector = smgr->createOctreeTriangleSelector(map->getMesh(), map, 128);
      map->setTriangleSelector(selector);
    }

  if (car)
    {
      scene::ISceneNodeAnimator* anim = smgr->createCollisionResponseAnimator(selector, car,
									      core::vector3df(10, 1, 5),
									      core::vector3df(0, -10.0f, 0),
									      core::vector3df(0, 0, 0),
									      0);
      car->addAnimator(anim);
      anim->drop();
    }

  if (car_2)
    {
      scene::ISceneNodeAnimator* anim = smgr->createCollisionResponseAnimator(selector, car_2,
									      core::vector3df(10, 1, 5),
									      core::vector3df(0, -10.0f, 0),
									      core::vector3df(0, 0, 0),
									      0);
      car_2->addAnimator(anim);
      anim->drop();
    }

  selector->drop();
  
  //---------------



  //------------CAM
  // scene::ICameraSceneNode *cam = smgr->addCameraSceneNodeFPS();
  // cam->setParent(car);
   scene::ICameraSceneNode *cam = smgr->addCameraSceneNode(0, core::vector3df(0, 300, 0), core::vector3df(0, -100, 50));
  //---------------

  device->getCursorControl()->setVisible(false);
  device->setWindowCaption(L"hyperSprint");

  // In order to do framerate independent movement, we have to know                                            
  // how long it was since the last frame                                                                      
  u32 then = device->getTimer()->getTime();
  u32 frames = 0;

  //Speed factor
  float speedy = 0.0;
  float invSpeedy = 0.0;

  //Time notions
  bool check = false;
  int laps = 0;
  struct timeval sTime;
  struct timeval eTime;
  gettimeofday(&sTime, NULL);

  while (device->run())
    {
      const u32 now = device->getTimer()->getTime();
      const f32 frameDeltaTime = (f32)(now - then) / 1000.f; // Time in seconds
      core::vector3df nodePosition = car->getPosition();
      core::vector3df carRotation = car->getRotation();
      core::vector3df camPosition = cam->getPosition();
      float fRotation = (speedy < 75.0) ? 0.75 : speedy / 100;
      then = now;
      gettimeofday(&eTime, NULL);

      //------------------------CAM-MOVEMENTS----------------------------                                  
      if (receiver.IsKeyDown(irr::KEY_KEY_O))
	{
	  camPosition.Y -= 1.5;
	  camPosition.Z += 1.0;
	}
      else if (receiver.IsKeyDown(irr::KEY_KEY_L))
	{
	  camPosition.Y += 1.5;
	  camPosition.Z -= 1.0;
	}
      //
      cam->setPosition(camPosition);

      //----------------------MOVEMENTS + SPEED --------------------------
      irr::core::vector3df Direction; 
      //
      speedy += (receiver.IsKeyDown(irr::KEY_KEY_Z) && speedy < 100.0) ? 1.0 : 0.0;
      speedy -= (!receiver.IsKeyDown(irr::KEY_KEY_Z) && speedy > 1.5) ? 2.0 : 0.0;
      invSpeedy += (receiver.IsKeyDown(irr::KEY_KEY_S) && invSpeedy < 50.0) ? 0.25 : 0.0;
      invSpeedy -= (!receiver.IsKeyDown(irr::KEY_KEY_S) && invSpeedy > 0.75) ? 0.75 : 0.0;
      //
      if (speedy <= 5.0 && invSpeedy >= 5.0)
      	{
      	  Direction.X = cos((carRotation.Y - 90.0) * irr::core::PI/180.f);
      	  Direction.Z = -sin((carRotation.Y - 90.0) * irr::core::PI/180.f);
      	  Direction.normalize();
      	  nodePosition -= Direction * (invSpeedy / 50.0);
      	}
      else if (invSpeedy <= 5.0 && speedy >= 5.0)
      	{
      	  Direction.X = cos((carRotation.Y + 90.0) * irr::core::PI/180.f);
      	  Direction.Z = -sin((carRotation.Y + 90.0) * irr::core::PI/180.f);
      	  Direction.normalize();
      	  nodePosition -= Direction * (speedy / 50.0);
      	}
      //
      car->setPosition(nodePosition);

      //----------------------------LAPS------------------------------
      if (isOnStartLine(car->getPosition()))
	{
	  check = true;
	  gettimeofday(&sTime, NULL);
	}
      else if (!isOnStartLine(car->getPosition()) && check)
	{
	  check = false;
	  laps += 1;
	}
	
      //------------------------ROTATIONS-----------------------------
      if (speedy > 5.0 || invSpeedy > 5.0) // == car moving
	{
	  if (receiver.IsKeyDown(irr::KEY_KEY_D))
	    carRotation.Y = (carRotation.Y > 360) ? 0.0 : carRotation.Y + (2.0f * fRotation);
	  else if (receiver.IsKeyDown(irr::KEY_KEY_Q))
	    carRotation.Y = (carRotation.Y < 0) ? 360.0 : carRotation.Y - (2.0f * fRotation);
	}
      //
      car->setRotation(carRotation);

      //
      driver->beginScene(true, true, video::SColor(255,0,0,0));
      smgr->drawAll(); // draw the 3d scene                                                                
      driver->endScene();
      //
      // if (++frames == 100)
      // 	{
	  core::stringw data = L"Time passed: ";
	  data += diff_millis(sTime, eTime) / 1000;
	  data += " && Lap : ";
	  data += laps;
	  font->draw(data, core::rect<s32>(10, 10, 260, 22), video::SColor(255, 0, 0, 100));
	  frames = 0;
	// }
    }
  device->drop();
  return (0);
}
