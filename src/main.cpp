//
// main.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Mon Apr 25 11:03:51 2016 Valerian Polizzi
// Last update Tue May  3 17:07:17 2016 Gonzague PAGIN
//

# include <StudioException.hpp>
# include <SoundManager.hh>

int		main(int ac, char **av)
{
  (void)ac;
  (void)av;
  SoundManager		s;

  s.addSound("test", "test.wav");
  s.playSound("test");
  return (0);
}
