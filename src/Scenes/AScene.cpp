//
// AScene.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 31 08:46:00 2016 Valérian Polizzi
// Last update Sun Jun  5 03:43:22 2016 Valérian Polizzi
//

#include <AScene.hh>

AScene::AScene(irr::scene::ISceneManager *IS, const AScene::Type &type) : _type(type)
{
  _entities = new EntityManager;
  _gentities = new GraphicEntityManager;
  _gentities->setScene(IS);
}


AScene::~AScene()
{
}

AScene::Type	AScene::getType() const
{
  return (_type);
}

void AScene::addEntity(AEntity *entity)
{
  _entities->addEntity(entity);
  switch (entity->getType())
    {
    case AEntity::Type::MENUITEM:
      entity->getGEntity()->setGraphic(_gentities->createCube());
      entity->getGEntity()->getGraphic()->setPosition(irr::core::vector3df(entity->getPos()->getX(), entity->getPos()->getY(),entity->getPos()->getZ()));
      entity->getGEntity()->getGraphic()->setScale(irr::core::vector3df(entity->getSize()->getX(), entity->getSize()->getY(),entity->getSize()->getZ()));      
     break;
    default:
      entity->getGEntity()->setGraphic(_gentities->createObject(entity->getModel()));
      entity->getGEntity()->getGraphic()->setScale(irr::core::vector3df(entity->getSize()->getX(), entity->getSize()->getY(),entity->getSize()->getZ()));
    entity->getGEntity()->getGraphic()->setMaterialFlag(irr::video::EMF_LIGHTING, false);
    entity->getGEntity()->getGraphic()->setRotation(irr::core::vector3df(0, 90, 0));
    

     break;
   }
}

GraphicEntityManager	*AScene::getGraphicEntityManager()
{
  return (_gentities);
}

int			AScene::getNbItems() const
{
  return (_entities->getEntities().size());
}

EntityManager		*AScene::getEntityManager()
{
  return (_entities);
}
