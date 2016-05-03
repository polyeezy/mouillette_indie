//
// GraphicManager.hh for hypertrack in /home/polyeezy/rendu/CPP/mouillette_indie/include/Manager
//
// Made by Valérian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Fri Apr 29 06:15:10 2016 Valérian Polizzi
// Last update Tue May  3 11:37:00 2016 Valérian Polizzi
//

#ifndef _GRAPHICMANAGER_HH_
# define _GRAPHICMANAGER_HH_

# include <string>
# include <iostream>
# include <irrlicht.h>

class GraphicManager
{
private:
  irr::IrrlichtDevice *_device;
  irr::video::IVideoDriver* _driver;
  irr::scene::ISceneManager* _smgr;
  irr::gui::IGUIEnvironment* _guienv;
public:
  GraphicManager();
  ~GraphicManager();

  bool	isRunning() const;
  int	render();
  int	init(const size_t &, const size_t &);
  int	openWindow();
  int	refresh();

};

#endif
