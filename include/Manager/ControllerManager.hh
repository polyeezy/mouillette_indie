//
// ControllerManager.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/Manager
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Wed May 11 14:38:00 2016 Loïc Weinhard
// Last update Tue May 17 08:44:18 2016 Valérian Polizzi
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
public:
  ControllerManager(){};
  ~ControllerManager(){};

  void	importConf();
  void	exportConf();
  void	setConfPath(const std::string &);
  void	setMapKey(const int, const int);
  int	getKey() const;
  void          mapKey(const int key, const int value);

  bool OnEvent(const irr::SEvent &event);
};

#endif
