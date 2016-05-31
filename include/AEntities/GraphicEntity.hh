//
// GraphicEntity.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 05:13:12 2016 Valérian Polizzi
// Last update Tue May 31 06:05:43 2016 Valérian Polizzi
//

#ifndef _GRAPHICENTITY_HH_
# define _GRAPHICENTITY_HH_
# include <irrlicht.h>
# include <ISceneNode.h>

class GraphicEntity
{
private:
  irr::scene::ISceneNode	*_entity;
public:
  GraphicEntity();
  ~GraphicEntity();

  void		setGraphic(irr::scene::ISceneNode *);
  irr::scene::ISceneNode		*getGraphic();

};

#endif
