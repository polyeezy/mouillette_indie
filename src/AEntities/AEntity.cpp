//
// AEntity.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 15:55:46 2016 Loïc Weinhard
// Last update Thu May 12 14:45:37 2016 Loïc Weinhard
//

#include "AEntity.hh"

template<typename T>
AEntity<T>::AEntity(Vec3<T>* size, Vec3<T>* pos, const AEntity::Type type, const std::string &model)
{
  _size = size;
  _pos = pos;
  _type = type;
  _model = model;
}

template<typename T>
AEntity<T>::~AEntity()
{

}

template<typename T>
Vec3<T>*	AEntity<T>::getSize() const
{
  return (_size);
}

template<typename T>
Vec3<T>*	AEntity<T>::getPos() const
{
  return (_pos);
}

template<typename T>
typename AEntity<T>::Type	AEntity<T>::getType() const
{
  return (_type);
}

template<typename T>
const std::string&	AEntity<T>::getModel()
{
  return (_model);
}

template<typename T>
void	AEntity<T>::setSize(const T width, const T height, const T depth)
{
  _size->setX(width);
  _size->setY(height);
  _size->setZ(depth);
}

template<typename T>
void	AEntity<T>::setSize(const Vec3<T>* size)
{
  _size->setX(size->getX());
  _size->setY(size->getY());
  _size->setZ(size->getZ());
}

template<typename T>
void	AEntity<T>::setPos(const T x, const T y, const T z)
{
  _pos->setX(x);
  _pos->setY(y);
  _pos->setZ(z);
}

template<typename T>
void	AEntity<T>::setPos(const Vec3<T>* pos)
{
  _pos->setX(pos->getX());
  _pos->setY(pos->getY());
  _pos->setZ(pos->getZ());
}

template<typename T>
void	AEntity<T>::setType(const AEntity<T>::Type type)
{
  _type = type;
}

template<typename T>
void	AEntity<T>::setModel(const std::string &model)
{
  _model = model;
}
