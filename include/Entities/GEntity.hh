//
// Entity.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Entities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 03:28:03 2016 Valérian Polizzi
// Last update Mon May 30 08:52:05 2016 Valérian Polizzi
//

#ifndef _GENTITY_HH_
# define _GENTITY_HH_

# include <AEntity.hh>
# include <irrlicht.h>

class GEntity
{
private:
  irr::scene::ISceneNode	*_graphicNode;
public:
  GEntity();
  ~GEntity();
  irr::scene::ISceneNode *getGraphicNode();
};


#endif
