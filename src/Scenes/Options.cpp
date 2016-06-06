/*
** Options.cpp for mouillette_indie
**
** Made by	Loïc Weinhard
** Login	weinha_l
**
** Started on	Tue May 31 14:54:10 2016 Loïc Weinhard
** Last update	Tue May 31 15:03:50 2016 Loïc Weinhard
*/

#include <Options.hh>
#include <Button.hh>

Options::Options(irr::scene::ISceneManager  *IS, irr::video::IVideoDriver* VD) : AMenu(IS, VD)
{
}

void            Options::addElements()
{
  this->addEntity(new Button(new Vec3(10, 2, 2), new Vec3(0, 30, 0), "Son",  "materials/jouer.png"));
  this->addEntity(new Button(new Vec3(10, 2, 2), new Vec3(0, 0, 0), "Video", "materials/jouer.png"));
  this->addEntity(new Button(new Vec3(10, 2, 2), new Vec3(0, -30, 0), "MainMenu", "materials/jouer.png"));
  this->getEntityManager()->getEntities()[this->getFocus()]->getGEntity()->getGraphic()->setScale(irr::core::vector3df(11, 3, 3));
}

Options::~Options()
{
}
