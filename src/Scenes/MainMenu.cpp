//
// MainMenu.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/Scenes
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Wed May 18 13:22:54 2016 Loïc Weinhard
// Last update Mon May 30 11:54:27 2016 Loïc Weinhard
//

#include "GraphicManager.hh"
#include "MainMenu.hh"

MainMenu::MainMenu()
{
  this->addEntity(new AEntity(new Vec3(500, 274, 0), new Vec3(X_CENTER(500), Y_CENTER(274), 0), AEntity::Type::MENUITEM, P2M + "chirouphare.png"));
}

MainMenu::~MainMenu()
{
}
