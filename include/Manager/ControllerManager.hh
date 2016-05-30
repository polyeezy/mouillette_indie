//
// ControllerManager.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/Manager
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Wed May 11 14:38:00 2016 Loïc Weinhard
// Last update Mon May 30 14:03:27 2016 Marc MORANT
//

#ifndef CONTROLLERMANAGER_HH_
# define CONTROLLERMANAGER_HH_

# include <map>
#include "irrlicht.h"
# include <iostream>
# include <string>
# include <fstream>
# include <iostream>
# include <sstream>
# define CM_CONF_PATH   "conf/keys.conf"
# define CM_CONTROL_COUNT	7

class	ControllerManager : public irr::IEventReceiver
{
public:
  typedef enum	Control
    {
      UP = 1, DOWN = 2, LEFT = 3, RIGHT = 4, ACTION = 5, PAUSE = 6, ESCAPE = 7
    }		e_control;

private:
  std::map<int, int>	_key_map;
  std::string		_path;
  bool			_keysDown[CM_CONTROL_COUNT];
public:
  ControllerManager();
  ~ControllerManager(){};

  void	importConf();
  void	exportConf();
  void	setConfPath(const std::string &);
  void	setMapKey(const int, const int);
  void          mapKey(const int key, const int value);

  bool OnEvent(const irr::SEvent &event);
  bool  isKeyDown(const e_control enumKey) const;
};

#endif
