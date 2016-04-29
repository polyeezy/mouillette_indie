//
// GraphicManager.hh for hypertrack in /home/polyeezy/rendu/CPP/mouillette_indie/include/Manager
//
// Made by Valérian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Fri Apr 29 06:15:10 2016 Valérian Polizzi
// Last update Fri Apr 29 06:38:34 2016 Valérian Polizzi
//

#ifndef _GRAPHICMANAGER_HH_
# define _GRAPHICMANAGER_HH_

# include <string>
# include <iostream>

class GraphicManager
{
public:
  GraphicManager();
  ~GraphicManager();

  int	createWindow(const std::string &, const size_t &, const size_t &);

};

#endif
