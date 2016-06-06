//
// Game.hh for  in /home/morant_m/Rendu/CPP/mouillette_indie
// 
// Made by Marc MORANT
// Login   <morant_m@epitech.net>
// 
// Started on  Mon Jun  6 22:18:49 2016 Marc MORANT
// Last update Mon Jun  6 23:16:35 2016 Marc MORANT
//

#ifndef _GAME_HH_
# define _GAME_HH_

# include <iostream>
# include <vector>
# include <AEntity.hh>
# include <ACar.hh>
# include <ControllerManager.hh>
# include <Timer.hpp>

class	Game
{
private:
  Timer *	_timer;

public:
  Game();
  ~Game();

  void	refreshGameVars(std::vector<AEntity*>, ControllerManager *);
  bool	isOnStartline(Vec3 *);
  void	Init(void);
};

#endif
