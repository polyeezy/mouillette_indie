//
// SoundManager.cpp for  in /home/hessu/EPITECH/mouillette_indie/src/Manager
// 
// Made by Gonzague PAGIN
// Login   <pagin_g@epitech.net>
// 
// Started on  Tue May  3 14:27:26 2016 Gonzague PAGIN
// Last update Fri Jun  3 14:44:11 2016 Gonzague PAGIN
//

#include "SoundManager.hh"
# include <iostream>

SoundManager::SoundManager()
{
  this->_engine = irrklang::createIrrKlangDevice();
  if (!this->_engine)
    std::cerr << "Error creating sound device !" << std::endl; // THROW
}

SoundManager::~SoundManager()
{
  this->_engine->drop();
}

void	SoundManager::playSound(const std::string &name, int volume)
{
  _sounds[name]->setDefaultVolume(volume);
  this->_engine->play2D(_sounds[name]);
}

void	SoundManager::addSound(const std::string &name, const std::string &path)
{
  this->_sounds[name] = this->_engine->addSoundSourceFromFile(path.c_str());
}
