//
// Core.cpp for Indie in /home/polyeezy/rendu/CPP/mouillette_indie/src/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 17 02:24:15 2016 Valérian Polizzi
// Last update Tue May 31 05:30:53 2016 Valérian Polizzi
//

#include <Core.hh>

Core::Core()
{
  _gm = new GraphicManager;
  _gm->init(640, 480);
  _gm->openWindow();
}

Core::~Core()
{
}
