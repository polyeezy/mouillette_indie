//
// GraphicEntityManager.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 05:58:38 2016 Valérian Polizzi
// Last update Sat Jun  4 10:10:18 2016 Valérian Polizzi
//

#include <GraphicEntityManager.hh>

GraphicEntityManager::GraphicEntityManager()
{
}

GraphicEntityManager::~GraphicEntityManager()
{
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
