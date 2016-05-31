//
// Entity.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Entities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 03:30:59 2016 Valérian Polizzi
// Last update Mon May 30 08:42:21 2016 Valérian Polizzi
//

#include <GEntity.hh>

GEntity::GEntity(Vec3* size, Vec3* pos) : AEntity(size, pos, AEntity::UNDEFINED, "")
{
  _graphicNode = NULL;
}

GEntity::~GEntity()
{
}

irr::scene::ISceneNode *GEntity::getGraphicNode()
{
  return (_graphicNode);
}

void	GEntity::push(void *scene)
{
  _graphicNode = scene->addCubeSceneNode();
}
