//
// ACar.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 06:13:58 2016 Valérian Polizzi
// Last update Mon Jun  6 08:29:31 2016 Valérian Polizzi
//

#include <ACar.hh>

ACar::ACar(Vec3 *size, Vec3 *pos, const std::string &txt) : AEntity(size, pos, AEntity::Type::CAR, txt)
{
}

ACar::~ACar()
{
}

void		ACar::accelerate()
{  
  this->setSpeed(this->getSpeed() + 1);
  Vec3          *pos = this->getPos();
 
 std::cout << "POS: " << pos->getX() << std::endl;
  this->setPos(new Vec3(pos->getX() + 0.1, pos->getY(), pos->getZ()));
}

void		ACar::setSpeed(const float s)
{
  _speed = s;
}

float	ACar::getSpeed() const
{
  return (_speed);
}
