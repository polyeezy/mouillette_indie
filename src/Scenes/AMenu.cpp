//
// AMenu.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Sat Jun  4 08:13:57 2016 Valérian Polizzi
// Last update Sun Jun  5 08:52:42 2016 Valérian Polizzi
//

#include <AMenu.hh>

AMenu::AMenu(irr::scene::ISceneManager  * SM, irr::video::IVideoDriver * DR) : AScene(SM, DR, AScene::Type::MENU), _current_focus(0)
{
  //   this->getEntityManager()->getEntities()[_current_focus]->getGEntity()->getGraphic()->setScale(irr::core::vector3df(11, 3, 3));
}

AMenu::~AMenu()
{

}

int		AMenu::nextMenuItem()
{
  this->getEntityManager()->getEntities()[_current_focus]->getGEntity()->getGraphic()->setScale(irr::core::vector3df(10, 2, 2));
  if (_current_focus + 1 < this->getNbItems())
    _current_focus++;
  else
    _current_focus = 0;
  this->getEntityManager()->getEntities()[_current_focus]->getGEntity()->getGraphic()->setScale(irr::core::vector3df(11, 3, 3));
  std::cout << "Current Menu item : " << this->getEntityManager()->getEntities()[_current_focus]->getValue() << std::endl;
  this->setAction(this->getEntityManager()->getEntities()[_current_focus]->getValue());
 return (0);
}

int		AMenu::previousMenuItem()
{
  this->getEntityManager()->getEntities()[_current_focus]->getGEntity()->getGraphic()->setScale(irr::core::vector3df(10, 2, 2));
  if (_current_focus - 1 >= 0)
    _current_focus--;
  else
    _current_focus = this->getNbItems() - 1;
  this->getEntityManager()->getEntities()[_current_focus]->getGEntity()->getGraphic()->setScale(irr::core::vector3df(11, 3, 3));
  std::cout << "Current Menu item : " << this->getEntityManager()->getEntities()[_current_focus]->getValue() << std::endl;
  this->setAction(this->getEntityManager()->getEntities()[_current_focus]->getValue());
  return (0);
}

int		AMenu::getFocus() const
{
  return (_current_focus);
}

void		AMenu::setFocus(const int f)
{
  _current_focus = 0;
}

void            AMenu::doUp()
{
  this->previousMenuItem();
}

void            AMenu::doDown()
{
  this->nextMenuItem();
}

void            AMenu::doAction()
{
  _current_focus = 0;
  //  this->setAction("MainMenu2");
}
