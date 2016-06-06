//
// AGameplay.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 05:16:56 2016 Valérian Polizzi
// Last update Mon Jun  6 07:41:15 2016 Valérian Polizzi
//

#include <AGameplay.hh>

AGameplay::AGameplay(irr::scene::ISceneManager *SM, irr::video::IVideoDriver *VD) : AScene(SM, VD, AScene::Type::GAME)
{

}

AGameplay::~AGameplay()
{
}

void            AGameplay::doUp()
{
  // reinterpret_cast<ACar*>(_player)->accelerate();
}

void            AGameplay::doDown()
{
}

void            AGameplay::doAction()
{
}

void		AGameplay::setPlayer(AEntity *car)
{
  _player = car;
}

AEntity		*AGameplay::getPlayer()
{
  return (_player);
}
