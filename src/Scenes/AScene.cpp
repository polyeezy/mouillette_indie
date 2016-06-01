//
// AScene.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 31 08:46:00 2016 Valérian Polizzi
// Last update Wed Jun  1 05:20:02 2016 Valérian Polizzi
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

  entity->getGEntity()->getGraphic()->
    setPosition(irr::core::vector3df(entity->getPos()->getX(), entity->getPos()->getY(),entity->getPos()->getZ()));
  
}

GraphicEntityManager	*AScene::getGraphicEntityManager()
{
  return (_gentities);
}
