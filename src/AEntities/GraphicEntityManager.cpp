//
// GraphicEntityManager.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 05:58:38 2016 Valérian Polizzi
// Last update Mon Jun  6 11:30:54 2016 Valérian Polizzi
//

#include <GraphicEntityManager.hh>

GraphicEntityManager::GraphicEntityManager()
{
}

GraphicEntityManager::~GraphicEntityManager()
{
}

irr::scene::IMeshSceneNode	*GraphicEntityManager::createMap(const std::string &map)
{

  enum
  {
    ID_IsNotPickable = 0,
    IDFlag_IsPickable = 1 << 0,
    IDFlag_IsHighlightable = 1 << 1
  };


  irr::scene::IAnimatedMesh* mesh_map = _scene->getMesh(map.c_str());
  // irr::scene::ISceneNode* skydome = _scene->addSkyDomeSceneNode(_driver->getTexture("../../media/skydome.jpg"),16,8,0.95f,2.0f);
  return (_scene->addOctreeSceneNode(mesh_map->getMesh(0), 0, IDFlag_IsPickable));
  //  if (map)
  // {
  //   map->setPosition(irr::core::vector3df(-50,-10,0));
  //    map->setRotation(irr::core::vector3df(0,180,0));
  //   map->setMaterialFlag(irr::video::EMF_LIGHTING, false);
  //   map->setScale(irr::core::vector3df(1.5, 1.5, 1.5));
  // }


 return (_scene->addCubeSceneNode());
}

irr::scene::ISceneNode	*GraphicEntityManager::createCube()
{
  return (_scene->addCubeSceneNode());
}

irr::scene::ISceneManager	*GraphicEntityManager::getScene()
{
  return (_scene);
}

irr::scene::IMeshSceneNode         *GraphicEntityManager::createObject(const std::string &path)
{
  irr::scene::IMesh				*mesh = _scene->getMesh(path.c_str());
  if (mesh)
    return (_scene->addMeshSceneNode(mesh));
  return (NULL);
}

void				GraphicEntityManager::setScene(irr::scene::ISceneManager *scene)
{
  _scene = scene;
}

