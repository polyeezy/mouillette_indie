//
// TextureManager.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Sun Jun  5 05:52:15 2016 Valérian Polizzi
// Last update Sun Jun  5 06:00:38 2016 Valérian Polizzi
//

#include <TextureManager.hh>

TextureManager::TextureManager(irr::video::IVideoDriver *driver) : _driver(driver)
{
}

TextureManager::~TextureManager()
{
}

irr::video::IVideoDriver	*TextureManager::getDriver()
{
  return (_driver);
}

irr::video::ITexture	*TextureManager::getTexture(const std::string &texture)
{
  return (this->getDriver()->getTexture(texture.c_str()));
}
