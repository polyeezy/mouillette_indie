//
// MainMenu.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/Scenes
//
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
//
// Started on  Wed May 18 13:22:54 2016 Loïc Weinhard
// Last update Sun Jun  5 05:33:31 2016 Valérian Polizzi
//

#include "GraphicManager.hh"
#include "MainMenu.hh"

MainMenu::MainMenu(irr::scene::ISceneManager  *IS) : AMenu(IS)
{
 
}

void		MainMenu::addElements()
{
  this->addEntity(new Button(new Vec3(10, 2, 2), new Vec3(0, 30, 0),  "Jouer"));
  this->addEntity(new Button(new Vec3(10, 2, 2), new Vec3(0, 0, 0), "Options"));
  this->addEntity(new Button(new Vec3(10, 2, 2), new Vec3(0, -30, 0), "Quitter"));
  this->getEntityManager()->getEntities()[this->getFocus()]->getGEntity()->getGraphic()->setScale(irr::core::vector3df(11, 3, 3));
}

MainMenu::~MainMenu()
{
  
}

int		MainMenu::runScene()
{
  return (0);
}

void		MainMenu::doUp()
{
  this->previousMenuItem();
}

void		MainMenu::doDown()
{
  this->nextMenuItem();
}

void		MainMenu::doAction()
{
  
}
