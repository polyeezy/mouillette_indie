//
// GraphicManager.hh for hypertrack in /home/polyeezy/rendu/CPP/mouillette_indie/include/Manager
//
// Made by Valérian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Fri Apr 29 06:15:10 2016 Valérian Polizzi
// Last update Mon May 30 07:12:42 2016 Valérian Polizzi
// Last update Mon May 30 11:29:42 2016 Loïc Weinhard
//

#ifndef _GRAPHICMANAGER_HH_
# define _GRAPHICMANAGER_HH_

# include <string>
# include <iostream>
# include <irrlicht.h>
# include <ControllerManager.hh>
# include <SceneManager.hh>
# include <Scenes.hh>

# define	RES_WIDTH	1280
# define	RES_HEIGHT	720

# define	X_CENTER(width)		((RES_WIDTH / 2) - (width / 2))
# define	Y_CENTER(height)	((RES_HEIGHT / 2) - (height / 2))

# define	X_LEFT(width)		((RES_WIDTH * 0.25) - (width / 2))
# define	Y_UP(width)		((RES_HEIGHT * 0.25) - (height / 2))

# define	X_RIGHT(width)		((RES_WIDTH * 0.75) - (width / 2))
# define	Y_DOWN(height)		((RES_HEIGHT * 0.75) - (height / 2))

class GraphicManager
{
private:
  irr::IrrlichtDevice		*_device;
  irr::video::IVideoDriver*	_driver;
  irr::scene::ISceneManager*	_smgr;
  irr::gui::IGUIEnvironment*	_guienv;

  ControllerManager		*_CM;
  SceneManager			*_SM;
  
public:
  GraphicManager();
  ~GraphicManager();

  ControllerManager	*getControllerManager();
  SceneManager		*getSceneManager();

  bool			isRunning() const;
  int			render();
  int			init(const size_t &, const size_t &);
  int			openWindow();
  int			refresh();
};

#endif
