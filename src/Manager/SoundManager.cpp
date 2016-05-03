//
// SoundManager.cpp for  in /home/hessu/EPITECH/mouillette_indie/src/Manager
// 
// Made by Gonzague PAGIN
// Login   <pagin_g@epitech.net>
// 
// Started on  Tue May  3 14:27:26 2016 Gonzague PAGIN
// Last update Tue May  3 16:08:15 2016 Gonzague PAGIN
//

#include "SoundManager.hh"

SoundManager::SoundManager()
{
  this->_engine = createIrrKlangDevice();
  if (!this->_engine)
    std::cerr << "Error creating sound device !" << std::endl; // THROW
}

SoundManager::~SoundManager()
{
  this->_engine->drop();
}

void	SoundManager::playSound(std::string &name)
{
  this->_engine->play2D(_sounds[name]); // C CHELOU
}

void	SoundManager::addSound(std::string &name, std::string &path)
{
  this->_sounds[name] = path;
}
