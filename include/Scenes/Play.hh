//
// Play.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 05:26:20 2016 Valérian Polizzi
// Last update Mon Jun  6 05:56:19 2016 Valérian Polizzi
//

#ifndef _PLAY_HH_
# define _PLAY_HH_

# include <AGameplay.hh>
# include <FordGT.hh>

class Play : virtual public AGameplay
{
public:
  Play(irr::scene::ISceneManager *SM, irr::video::IVideoDriver *VD);
  ~Play();

  void addElements();
  void doUp();
};

#endif
