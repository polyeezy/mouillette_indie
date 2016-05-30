//
// MainMenu.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/Scenes
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Wed May 18 13:22:54 2016 Loïc Weinhard
// Last update Mon May 30 17:05:29 2016 Loïc Weinhard
//

#include "GraphicManager.hh"
#include "MainMenu.hh"

MainMenu::MainMenu()
{
  this->addEntity(new Button(new Vec3(100, 100, 0), new Vec3(X_CENTER(100), Y_UP(100), 0), "JOUER"));
  this->addEntity(new Button(new Vec3(100, 100, 0), new Vec3(X_CENTER(100), Y_CENTER(100), 0), "OPTIONS"));
  this->addEntity(new Button(new Vec3(100, 100, 0), new Vec3(X_CENTER(100), Y_DOWN(100), 0), "QUITTER"));
}

MainMenu::~MainMenu()
{
}
