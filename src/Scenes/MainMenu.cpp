//
// MainMenu.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/Scenes
//
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
//
// Started on  Wed May 18 13:22:54 2016 Loïc Weinhard
// Last update Mon Jun  6 23:25:00 2016 Marc MORANT
//

#include "MainMenu.hh"
#include <Button.hh>

MainMenu::MainMenu(irr::scene::ISceneManager  *IS, irr::video::IVideoDriver* VD) : AMenu(IS, VD)
{
 
}

void		MainMenu::addElements()
{
  this->addEntity(new Button(new Vec3(20, 4, 4), new Vec3(0, 30, 60), "Jouer",  "materials/jouer.png"));
  this->getEntityManager()->getEntities()[this->getFocus()]->getGEntity()->getGraphic()->setScale(irr::core::vector3df(11, 3, 3));
}

MainMenu::~MainMenu()
{
  
}
