//
// main.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Mon Apr 25 11:03:51 2016 Valerian Polizzi
// Last update Tue May  3 11:13:51 2016 Valérian Polizzi
//

# include <StudioException.hpp>
# include <GraphicManager.hh>

int		main(int ac, char **av)
{
  GraphicManager	GM;
  GM.init(640, 480);
  GM.openWindow();
  (void)ac;
  (void)av;

  return (0);
}
