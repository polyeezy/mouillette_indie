//
// AScene.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 31 08:46:00 2016 Valérian Polizzi
// Last update Tue May 31 09:50:30 2016 Valérian Polizzi
//

#include <AScene.hh>

AScene::AScene(irr::scene::ISceneManager     *IS)
{
  _entities = new EntityManager;
  _gentities = new GraphicEntityManager;
  _gentities->setScene(IS);
}

AScene::~AScene()
{
}

void AScene::addEntity(AEntity *entity)
{
  _entities->addEntity(entity);
  //entity->getGEntity()->setGraphic(_gentities->getScene()->
  //  _gentities->createCube();
  entity->getGEntity()->setGraphic(_gentities->createCube());
  entity->getGEntity()->getGraphic()->setPosition(irr::core::vector3df(0,0,5));
}

GraphicEntityManager	*AScene::getGraphicEntityManager()
{
  return (_gentities);
}
