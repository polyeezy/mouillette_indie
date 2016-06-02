//
// GraphicEntity.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 05:19:58 2016 Valérian Polizzi
// Last update Tue May 31 06:48:46 2016 Valérian Polizzi
//

#include <GraphicEntity.hh>

GraphicEntity::GraphicEntity() : _entity(NULL)
{
}

GraphicEntity::~GraphicEntity()
{
}

void		GraphicEntity::setGraphic(irr::scene::ISceneNode *g)
{
  _entity = g;
}

irr::scene::ISceneNode *GraphicEntity::getGraphic()
{
  return (_entity);
}
