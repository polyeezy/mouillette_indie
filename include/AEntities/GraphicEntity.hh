//
// GraphicEntity.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 05:13:12 2016 Valérian Polizzi
// Last update Mon May 30 06:29:42 2016 Valérian Polizzi
//

#ifndef _GRAPHICENTITY_HH_
# define _GRAPHICENTITY_HH_
# include <irrlicht.h>
# include <ISceneNode.h>

class GraphicEntity
{
private:
  irr::scene::ISceneNode	*entity;
public:
  GraphicEntity();
  ~GraphicEntity();

};

#endif
