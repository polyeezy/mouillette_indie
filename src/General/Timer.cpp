//
// timer.cpp for  in /home/hessu/temp/timer
// 
// Made by Gonzague PAGIN
// Login   <pagin_g@epitech.net>
// 
// Started on  Mon Jun  6 10:38:17 2016 Gonzague PAGIN
// Last update Mon Jun  6 14:04:55 2016 Gonzague PAGIN
//

#include "timer.hpp"

Timer::Timer()
{
  _dummy = irr::createDevice(irr::video::EDT_NULL);
  _timer = _dummy->getTimer();
}

Timer::~Timer()
{
  _dummy->drop();
}

void	Timer::start()
{
  _start = _timer->getRealTime();  
}

void	Timer::now() // à mettre dans la boucle de render
{
  _now = _timer->getRealTime();
  _time = _now - _start;
}

int	Timer::getTime()
{
  return (_time / 1000);
}

