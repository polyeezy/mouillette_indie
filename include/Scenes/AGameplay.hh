//
// AGameplay.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 05:14:58 2016 Valérian Polizzi
// Last update Mon Jun  6 06:27:53 2016 Valérian Polizzi
//

#ifndef _AGAMEPLAY_HH_
# define _AGAMEPLAY_HH_

# include <AScene.hh>
# include <ACar.hh>

class AGameplay : public AScene
{
public:
  AGameplay(irr::scene::ISceneManager*, irr::video::IVideoDriver*);
  ~AGameplay();

  AEntity		*_player;

  virtual void  addElements() = 0; 
  int           runScene();
  void          doUp();
  void          doDown();
  void          doAction();
  void		setPlayer(AEntity *);
  AEntity     	*getPlayer();
};

#endif
