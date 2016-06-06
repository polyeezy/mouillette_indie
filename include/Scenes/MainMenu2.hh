//
// MainMenu.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/Scenes
//
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
//
// Started on  Wed May 18 13:21:30 2016 Loïc Weinhard
// Last update Mon Jun  6 19:00:59 2016 Marc MORANT
//

#ifndef MAINMENU2_HH_
# define MAINMENU2_HH_

# include <AMenu.hh>

class MainMenu2 : virtual public AMenu
{
public:
  MainMenu2(irr::scene::ISceneManager*, irr::video::IVideoDriver*);
  ~MainMenu2();
  
  void		addElements();
  int		runScene();
  void		doUp();
  void		doDown();
  void		doLeft();
  void		doRight();
  void		doAction();
};

#endif
