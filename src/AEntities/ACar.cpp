//
// ACar.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 06:13:58 2016 Valérian Polizzi
// Last update Mon Jun  6 21:28:23 2016 Marc MORANT
//

#include <ACar.hh>

ACar::ACar(Vec3 *size, Vec3 *pos, const std::string &txt) : AEntity(size, pos, AEntity::Type::CAR, txt),
							    _speed(0.0),
							    _break(0.0)
{
}

ACar::~ACar()
{
}

void		ACar::Accelerate()
{
  this->setSpeed((this->getSpeed() < 100.0) ? this->getSpeed() + 1.0 : this->getSpeed() + 0.0);
  std::cout << "Speed is now: " << this->getSpeed() << std::endl;
}

void		ACar::Break()
{
  this->setBreak((this->getBreak() < 100.0) ? this->getBreak() + 0.75 : this->getBreak() + 0.0);
  std::cout << "Break is now: " << this->getBreak() << std::endl;
}

void		ACar::RotateRight()
{
  Vec3 *	temp = this->getRot();
  float		fRotation = (this->getSpeed() < 75.0) ? 0.75 : this->getSpeed() / 100;
  float		rotY;

  if (this->_speed >= 5.0 || this->_break >= 5.0)
    {
      rotY = (temp->getY() > 360.0) ? 0.0 : temp->getY() + (2.0f * fRotation);
      temp->setY(rotY);
      this->setRot(temp);
    }
}

void		ACar::RotateLeft()
{
  Vec3 *	temp = this->getRot();
  float		fRotation = (this->getSpeed() < 75.0) ? 0.75 : this->getSpeed() / 100;
  float		rotY;

  if (this->_speed >= 5.0 || this->_break >= 5.0)
    {
      rotY = (temp->getY() < 0.0) ? 360.0 : temp->getY() - (2.0f * fRotation);
      temp->setY(rotY);
      this->setRot(temp);
    }
}

void		ACar::Refresh()
{
  Vec3 *	posTemp = this->getPos();
  Vec3 *	temp = this->getRot();
  Vec3		Direction;

  if (this->getSpeed() <= 5.0 && this->getBreak() >= 5.0)
    {
      Direction.setX(cos((temp->getY() - 90.0) * M_PI/180.f));
      Direction.setZ(-sin((temp->getY() - 90.0) * M_PI/180.f));
      //      Direction.normalize();
      posTemp->setX(posTemp->getX() - (Direction.getX() * (this->getBreak() / 50.0)));
      posTemp->setY(posTemp->getY() - (Direction.getY() * (this->getBreak() / 50.0)));
      posTemp->setZ(posTemp->getZ() - (Direction.getZ() * (this->getBreak() / 50.0)));
      //      nodePosition -= Direction * (this->getBreak) / 50.0);
    }
  else if (this->getBreak() <= 5.0 && this->getSpeed() >= 5.0)
    {
      Direction.setX(cos((temp->getY() + 90.0) * M_PI/180.f));
      Direction.setZ(-sin((temp->getY() + 90.0) * M_PI/180.f));
      //      Direction.normalize();
      posTemp->setX(posTemp->getX() - (Direction.getX() * (this->getSpeed() / 50.0)));
      posTemp->setY(posTemp->getY() - (Direction.getY() * (this->getSpeed() / 50.0)));
      posTemp->setZ(posTemp->getZ() - (Direction.getZ() * (this->getSpeed() / 50.0)));
      //      nodePosition -= Direction * (this->getSpeed() / 50.0);
    }
  this->setPos(posTemp);
}

void		ACar::setSpeed(const float s)
{
  _speed = s;
}

float	ACar::getSpeed() const
{
  return (_speed);
}

void		ACar::setBreak(const float b)
{
  _break = b;
}

float	ACar::getBreak() const
{
  return (_break);
}
