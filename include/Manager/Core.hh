//
// Core.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 17 02:22:46 2016 Valérian Polizzi
// Last update Mon Jun  6 22:20:45 2016 Marc MORANT
//

#ifndef _CORE_HH_
# define _CORE_HH_

# include <GraphicManager.hh>
# include <EntityManager.hh>
# include <Game.hh>
# include <SoundManager.hh>

class Core
{
  GraphicManager	*_gm;
  Game *		_game;
public:
  Core();
  ~Core();

  void	mainLoop(void);
};

#endif
