//
// Core.cpp for Indie in /home/polyeezy/rendu/CPP/mouillette_indie/src/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 17 02:24:15 2016 Valérian Polizzi
// Last update Mon Jun  6 22:11:34 2016 Marc MORANT
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

void	Core::mainLoop(void)
{
  while (this->_gm->isRunning())
    {
      if (this->_gm->getSceneManager()->getCurrentScene()->getType() != AScene::MENU)
	{
	  this->_gm->getControllerManager()->interpretKeys();
	  this->_gm->getSceneManager()->getCurrentScene()->Refresh();
	}
      this->_gm->render();
      this->_gm->refresh();
    }
}
