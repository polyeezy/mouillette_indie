//
// GraphicEntityManager.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 05:58:38 2016 Valérian Polizzi
// Last update Tue May 31 06:47:15 2016 Valérian Polizzi
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

void GraphicEntityManager::setScene(irr::scene::ISceneManager *scene)
{
  _scene = scene;
}

irr::scene::ISceneManager	*GraphicEntityManager::getScene()
{
  return (_scene);
}
