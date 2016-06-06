//
// AMenu.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Sat Jun  4 08:11:44 2016 Valérian Polizzi
// Last update Mon Jun  6 22:12:06 2016 Marc MORANT
//

#ifndef _AMENU_HH_
# define _AMENU_HH_

# include <AScene.hh>

class AMenu : public AScene
{
private:
  int	_current_focus;
public:
  AMenu(irr::scene::ISceneManager*, irr::video::IVideoDriver*);
  ~AMenu();

  virtual void  addElements() = 0;
  int	nextMenuItem();
  int	previousMenuItem();
  int	next();
  int	getFocus() const;
  void	setFocus(const int);

  int           runScene();
  void          doUp();
  void          doDown();
  void		doLeft();
  void		doRight();
  void          doAction();
  void		Refresh();


};

#endif
