//
// AScene.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 31 08:44:17 2016 Valérian Polizzi
// Last update Tue May 31 09:46:44 2016 Valérian Polizzi
//

#ifndef _ASCENE_HH_
# define _ASCENE_HH_

#include <AEntity.hh>
#include <EntityManager.hh>
#include <GraphicEntityManager.hh>

class AScene
{
private:
  EntityManager		*_entities;
  GraphicEntityManager	*_gentities;
public:
  AScene(irr::scene::ISceneManager     *);
  ~AScene();
  
  void	addEntity(AEntity *);
  GraphicEntityManager *getGraphicEntityManager();

};
  
#endif
