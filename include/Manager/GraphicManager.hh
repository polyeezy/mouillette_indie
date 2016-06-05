//
// GraphicManager.hh for hypertrack in /home/polyeezy/rendu/CPP/mouillette_indie/include/Manager
//
// Made by Valérian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Fri Apr 29 06:15:10 2016 Valérian Polizzi
// Last update Sun Jun  5 03:20:39 2016 Valérian Polizzi
//

#ifndef _GRAPHICMANAGER_HH_
# define _GRAPHICMANAGER_HH_

# include <string>
# include <iostream>
# include <irrlicht.h>
# include <ControllerManager.hh>
# include <SceneManager.hh>
# include <CameraManager.hh>
# include <SoundManager.hh>
# include <Scenes.hh>

# define	RES_WIDTH	1280
# define	RES_HEIGHT	720

# define	X_CENTER(width)		((RES_WIDTH / 2) - (width / 2))
# define	Y_CENTER(height)	((RES_HEIGHT / 2) - (height / 2))

# define	X_LEFT(width)		((RES_WIDTH * 0.25) - (width / 2))
# define	Y_UP(height)		((RES_HEIGHT * 0.25) - (height / 2))

# define	X_RIGHT(width)		((RES_WIDTH * 0.75) - (width / 2))
# define	Y_DOWN(height)		((RES_HEIGHT * 0.75) - (height / 2))

class GraphicManager
{
private:
  irr::IrrlichtDevice		*_device;
  irr::video::IVideoDriver	*_driver;
  ControllerManager		*_CM;
  SceneManager			*_SM;
  CameraManager			*_CAMM;
  SoundManager			*_SNDM;
public:
  GraphicManager();
  ~GraphicManager();

  ControllerManager	*getControllerManager();
  SceneManager		*getSceneManager();
  SoundManager		*getSoundManager();

  bool			isRunning() const;
  int			render();
  int			init(const size_t &, const size_t &);
  int			openWindow();
  int			refresh();
};

#endif
