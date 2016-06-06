//
// Game.cpp for  in /home/morant_m/Rendu/CPP/mouillette_indie
// 
// Made by Marc MORANT
// Login   <morant_m@epitech.net>
// 
// Started on  Mon Jun  6 22:18:26 2016 Marc MORANT
// Last update Mon Jun  6 23:22:22 2016 Marc MORANT
//

#include <Game.hh>

Game::Game()
{
  _timer = new Timer;
}

Game::~Game()
{}

void		Game::Init(void)
{
  this->_timer->start();
}

bool		Game::isOnStartline(Vec3 * pos)
{
  if ((pos->getX() <= 5.0 && pos->getX() >= 0.0)
      && (pos->getZ() >= 90 && pos->getZ() <= 130.0))
    return true;
  return false;
}

void		Game::refreshGameVars(std::vector<AEntity*> entities, ControllerManager * ptr)
{
  this->_timer->now();
  for (std::vector<AEntity*>::iterator It = entities.begin(); It != entities.end(); It++)
    {
      if ((*It)->getType() == AEntity::CAR)
	{
	  reinterpret_cast<ACar*>((*It))->checkSpeeds(ptr->isKeyDown(ControllerManager::UP), ptr->isKeyDown(ControllerManager::DOWN));
	  if (isOnStartline((*It)->getPos()))
	    {
	    }
	}
    }
}
