//
// GraphicEntityManager.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 05:56:40 2016 Valérian Polizzi
// Last update Tue May 31 08:09:38 2016 Valérian Polizzi
//

#ifndef _GRAPHICENTITYMANAGER_HH_
# define _GRAPHICENTITYMANAGER_HH_

# include <irrlicht.h>

class GraphicEntityManager 
{
private:
  irr::scene::ISceneManager	*_scene;
public:
  GraphicEntityManager();
  ~GraphicEntityManager();
 
  irr::scene::ISceneManager *getScene();
  void	setScene(irr::scene::ISceneManager *);

  irr::scene::ISceneNode	*createCube();
};

#endif
