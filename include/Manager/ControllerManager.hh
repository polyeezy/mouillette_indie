//
// ControllerManager.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/Manager
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Wed May 11 14:38:00 2016 Loïc Weinhard
// Last update Wed May 11 14:56:00 2016 Loïc Weinhard
//

#ifndef CONTROLLERMANAGER_HH_
# define CONTROLLERMANAGER_HH_

# include <map>

class	ControllerManager
{
public:
  typedef enum	Control
    {
      UP, DOWN, LEFT, RIGHT, ACTION, PAUSE, ESCAPE
    }		e_control;

private:
  std::map<int, int>	_keys;
  std::string		_conf_path;

public:
  ControllerManager(){};
  ~ControllerManager(){};

  void	importConf();
  void	exportConf();
  void	setConfPath(const std::string &);
  void	setMapKey(const int, const int);
  int	getKey() const;
};

#endif
