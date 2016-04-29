//
// AEntity.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 15:55:46 2016 Loïc Weinhard
// Last update Fri Apr 29 17:17:56 2016 Loïc Weinhard
//

#include "AEntity.hh"

AEntity::AEntity(Vec3* size, Vec3* pos, const AEntity::Type type, const std::string &model)
{
  _size = size;
  _pos = pos;
  _type = type;
  _model = model;
}

AEntity::~AEntity()
{

}

Vec3*	AEntity::getSize() const
{
  return (_size);
}

Vec3*	AEntity::getPos() const
{
  return (_pos);
}

AEntity::Type	AEntity::getType() const
{
  return (_type);
}

const std::string&	AEntity::getModel()
{
  return (_model);
}

void	AEntity::setSize(const int width, const int height, const int depth)
{
  _size->setX(width);
  _size->setY(height);
  _size->setZ(depth);
}

void	AEntity::setSize(const Vec3* size)
{
  _size->setX(size->getX());
  _size->setY(size->getY());
  _size->setZ(size->getZ());
}

void	AEntity::setPos(const int x, const int y, const int z)
{
  _pos->setX(x);
  _pos->setY(y);
  _pos->setZ(z);
}

void	AEntity::setPos(const Vec3* pos)
{
  _pos->setX(pos->getX());
  _pos->setY(pos->getY());
  _pos->setZ(pos->getZ());
}

void	AEntity::setType(const AEntity::Type type)
{
  _type = type;
}

void	AEntity::setModel(const std::string &model)
{
  _model = model;
}