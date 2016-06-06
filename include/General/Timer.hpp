//
// timer.hpp for  in /home/hessu/temp/timer
// 
// Made by Gonzague PAGIN
// Login   <pagin_g@epitech.net>
// 
// Started on  Mon Jun  6 10:29:09 2016 Gonzague PAGIN
// Last update Mon Jun  6 12:01:50 2016 Gonzague PAGIN
//

#ifndef TIMER_HPP_
#define TIMER_HPP_

#include <irrlicht.h>

class Timer
{
 public:
  Timer();
  ~Timer();
  int			getTime();
  void			start();
  void			now();
  void			restart();

 private:
  irr::IrrlichtDevice	*_dummy;
  irr::ITimer		*_timer;
  int			_start;
  int			_now;
  int			_time;
};

#endif //TIMER_HPP_
