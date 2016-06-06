//
// TextureManager.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Sun Jun  5 05:50:23 2016 Valérian Polizzi
// Last update Sun Jun  5 06:01:08 2016 Valérian Polizzi
//

#ifndef _TEXTUREMANAGER_HH_
# define _TEXTUREMANAGER_HH_

# include <irrlicht.h>
# include <string>

class TextureManager
{
private:
  irr::video::IVideoDriver	*_driver;
public:
  TextureManager(irr::video::IVideoDriver*);
  ~TextureManager();
  irr::video::IVideoDriver	*getDriver();
  irr::video::ITexture    *getTexture(const std::string &texture);
};

#endif
