/*
** Options.cpp for mouillette_indie
**
** Made by	Loïc Weinhard
** Login	weinha_l
**
** Started on	Tue May 31 14:54:10 2016 Loïc Weinhard
** Last update	Tue May 31 15:03:50 2016 Loïc Weinhard
*/

#include "Scenes.hh"

Options::Options()
{
  this->addEntity(new Button(new Vec3(100, 100, 0), new Vec3(X_CENTER(100), Y_UP(100), 0), "SON"));
  this->addEntity(new Button(new Vec3(100, 100, 0), new Vec3(X_CENTER(100), Y_CENTER(100), 0), "GRAPHISMES"));
  this->addEntity(new Button(new Vec3(100, 100, 0), new Vec3(X_CENTER(100), Y_DOWN(100), 0), "RETOUR"));
}

Options::~Options()
{
}
