//
// MainMenu.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/Scenes
//
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
//
// Started on  Wed May 18 13:22:54 2016 Loïc Weinhard
// Last update Sun Jun  5 07:15:49 2016 Valérian Polizzi
//

#include "GraphicManager.hh"
#include "MainMenu2.hh"

MainMenu2::MainMenu2(irr::scene::ISceneManager *IS, irr::video::IVideoDriver* D) : AMenu(IS, D)
{
 
}

void		MainMenu2::addElements()
{
  this->addEntity(new Button(new Vec3(10, 2, 20), new Vec3(0, 30, 0),  "Jouer"));
}

MainMenu2::~MainMenu2()
{
  
}

int		MainMenu2::runScene()
{
  return (0);
}

void		MainMenu2::doUp()
{
  this->previousMenuItem();
}

void		MainMenu2::doDown()
{
  this->nextMenuItem();
}

void		MainMenu2::doAction()
{
}
