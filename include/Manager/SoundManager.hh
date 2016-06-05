//
// SoundManager.hh for  in /home/hessu/EPITECH/mouillette_indie/include/Manager
// 
// Made by Gonzague PAGIN
// Login   <pagin_g@epitech.net>
// 
// Started on  Tue May  3 14:27:13 2016 Gonzague PAGIN
// Last update Sun Jun  5 14:49:15 2016 Gonzague PAGIN
//

#ifndef SOUNDMANAGER_HH_
#define SOUNDMANAGER_HH_

#include <map>
#include <string>
#include <irrKlang.h>


class SoundManager
{
public:
  SoundManager();
  ~SoundManager();
  
  void	addSound(const std::string &name, const std::string &path);
  //  void	playSound(const std::string &name);
  void	playSound(const std::string &name, float volume = 1, bool loop = 0);
  
private:
  irrklang::ISoundEngine*				_engine;
  std::map<std::string, irrklang::ISoundSource*>	_sounds;
};

#endif //SOUNDMANAGER_H_
