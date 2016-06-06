//
// Play.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 05:13:12 2016 Valérian Polizzi
// Last update Mon Jun  6 22:13:45 2016 Marc MORANT
//

#include <Play.hh>
#include <Map1.hh>

Play::Play(irr::scene::ISceneManager *SM, irr::video::IVideoDriver *VD) : AGameplay(SM, VD)
{

}

void Play::addElements()
{
  this->addEntity(new FordGT(new Vec3(1, 1, 1), new Vec3(0, 30, 0)));
  this->addEntity(new Map1(new Vec3(1.5, 1.5, 1.5), new Vec3(-50, -10, 0)));
  this->setPlayer(this->getEntityManager()->getEntities()[0]);
  //  this->getPlayer()->setRot(new Vec3(0, 90, 0));
}

void Play::Refresh()
{
  std::vector<AEntity*>	temp = this->getEntityManager()->getEntities();
  
  for (std::vector<AEntity*>::iterator It = temp.begin(); It != temp.end(); It++)
    {
      if ((*It)->getType() == AEntity::CAR)
	reinterpret_cast<ACar*>((*It))->Refresh();
    }
}

Play::~Play()
{
}

void	Play::doUp()
{
  Vec3          *pos = this->getEntityManager()->getEntities()[0]->getPos();

  std::cout << "UP" << std::endl;
  //  irr::core::vector3df newpos(pos->getX() + 1, pos->getY(), pos->getZ());
  //  this->getEntityManager()->getEntities()[0]->setPos(new Vec3(pos->getX() + 1, pos->getY(), pos->getZ()));
  reinterpret_cast<ACar*>(this->getEntityManager()->getEntities()[0])->Accelerate();
}

void	Play::doDown()
{
  reinterpret_cast<ACar*>(this->getEntityManager()->getEntities()[0])->Break();
}

void	Play::doLeft()
{
  reinterpret_cast<ACar*>(this->getEntityManager()->getEntities()[0])->RotateLeft();
}

void	Play::doRight()
{
  reinterpret_cast<ACar*>(this->getEntityManager()->getEntities()[0])->RotateRight();
}
