//
// AEntity.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 15:55:46 2016 Loïc Weinhard
// Last update Sat Jun  4 10:29:44 2016 Valérian Polizzi
//

#include "AEntity.hh"

AEntity::AEntity(Vec3* size, Vec3* pos, const AEntity::Type type, const std::string &model, const std::string &value)
{
  _size = size;
  _pos = pos;
  _type = type;
  _model = model;
  _value = value;
  _gentity = new GraphicEntity;
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


std::string	AEntity::getModel() const
{
  return (_model);
}

std::string	AEntity::getValue() const
{
  return (_value);
}


void	AEntity::setSize(const float width, const float height, const float depth)
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
  this->getGEntity()->getGraphic()->setScale(irr::core::vector3df(0, 0, 0));
}


void	AEntity::setPos(const float x, const float y, const float z)
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

void	AEntity::setValue(const std::string &value)
{
  _value = value;
}


void	AEntity::setModel(const std::string &model)
{
  _model = model;
}

AEntity&	AEntity::operator=(const AEntity &entity)
{
  _size = entity.getSize();
  _pos = entity.getPos();
  _type = entity.getType();
  this->setModel(entity.getModel());
  return (*this);
}

GraphicEntity		*AEntity::getGEntity()
{
  return (_gentity);
}
