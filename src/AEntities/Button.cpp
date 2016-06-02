//
// Button.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon May 30 14:33:40 2016 Loïc Weinhard
// Last update Mon May 30 16:04:20 2016 Loïc Weinhard
//

#include "Button.hh"

Button::Button(Vec3 *size, Vec3 *pos, const std::string &lbl, int bg_color, int border_color, int label_color, int label_size) : AEntity(size, pos, AEntity::Type::MENUITEM, "")
{
  _bg_color = bg_color;
  _border_color = border_color;
  _label_color = label_color;
  _label_size = label_size;
  _label = lbl;
}

Button::~Button()
{
}

void	Button::setBgColor(const int bg_color)
{
  _bg_color = bg_color;
}

void	Button::setBorderColor(const int border_color)
{
  _border_color = border_color;
}

void	Button::setLabelColor(const int label_color)
{
  _label_color = label_color;
}

void	Button::setLabel(const std::string &label)
{
  _label = label;
}

void	Button::setLabelSize(const int label_size)
{
  _label_size = label_size;
}

int	Button::getBgColor() const
{
  return _bg_color;
}

int	Button::getBorderColor() const
{
  return _border_color;
}
int	Button::getLabelColor() const
{
  return _label_color;
}

std::string	Button::getLabel() const
{
  return _label;
}

int		Button::getLabelSize() const
{
  return _label_size;
}

Button&       Button::operator=(const Button &button)
{
  _bg_color = button.getBgColor();
  _border_color = button.getBorderColor();
  _label = button.getLabel();
  _label_color = button.getLabelColor();
  _label_size = button.getLabelSize();
  return *this;
}

std::ostream& Button::operator<<(std::ostream &os)
{
  os << "Label : " << _label << " || [" << this->getPos()->getX() << ":" << this->getPos()->getY() << "]";
  return (os);
}
