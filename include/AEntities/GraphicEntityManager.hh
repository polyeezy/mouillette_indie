//
// GraphicEntityManager.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 05:56:40 2016 Valérian Polizzi
// Last update Sun Jun  5 03:27:15 2016 Valérian Polizzi
//

#ifndef _GRAPHICENTITYMANAGER_HH_
# define _GRAPHICENTITYMANAGER_HH_

# include <irrlicht.h>
# include <string>

class GraphicEntityManager 
{
private:
  irr::scene::ISceneManager	*_scene;
  irr::video::IVideoDriver      *_driver;
public:
  GraphicEntityManager();
  ~GraphicEntityManager();
 
  irr::scene::ISceneManager *getScene();
  irr::video::IVideoDriver      *getDriver();
  void				setDevice(irr::IrrlichtDevice *);

  void	setScene(irr::scene::ISceneManager *);

  irr::scene::ISceneNode	*createCube();
  irr::scene::IMeshSceneNode		*createObject(const std::string &);
  
};

#endif
