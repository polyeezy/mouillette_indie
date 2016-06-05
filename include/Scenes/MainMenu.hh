//
// MainMenu.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/Scenes
//
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
//
// Started on  Wed May 18 13:21:30 2016 Loïc Weinhard
// Last update Sun Jun  5 05:16:26 2016 Valérian Polizzi
//

#ifndef MAINMENU_HH_
# define MAINMENU_HH_

# include <AMenu.hh>

class MainMenu : virtual public AMenu
{
public:
  MainMenu(irr::scene::ISceneManager *);
  ~MainMenu();
  
  void		addElements();
  int		runScene();
  void		doUp();
  void		doDown();
  void		doAction();
};

#endif
