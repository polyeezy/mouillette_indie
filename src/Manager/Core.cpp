//
// Core.cpp for Indie in /home/polyeezy/rendu/CPP/mouillette_indie/src/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 17 02:24:15 2016 Valérian Polizzi
// Last update Mon May 30 03:07:32 2016 Valérian Polizzi
//

#include <Core.hh>

Core::Core()
{
  _gm = new GraphicManager;
  _gm->init(640, 480);
  _gm->getSceneManager()->loadScene("testScene");
  _gm->openWindow();
}

Core::~Core()
{
}
