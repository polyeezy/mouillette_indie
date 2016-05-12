//
// Vec3.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 16:00:29 2016 Loïc Weinhard
// Last update Thu May 12 13:56:42 2016 Loïc Weinhard
//

#include "Vec3.hh"

template<typename T>
Vec3<T>::Vec3(const T x, const T y, const T z)
{
  _x = x;
  _y = y;
  _z = z;
}

template<typename T>
Vec3<T>::~Vec3()
{
}

template<typename T>
T	Vec3<T>::getX() const
{
  return _x;
}

template<typename T>
T	Vec3<T>::getY() const
{
  return _y;
}

template<typename T>
T	Vec3<T>::getZ() const
{
  return _z;
}

template<typename T>
void	Vec3<T>::setX(const T &x)
{
  _x = x;
}

template<typename T>
void	Vec3<T>::setY(const T &y)
{
  _y = y;
}

template<typename T>
void	Vec3<T>::setZ(const T &z)
{
  _z = z;
}

template<typename T>
Vec3<T>&	Vec3<T>::operator=(const Vec3 &vec)
{
  _x = vec.getX();
  _y = vec.getY();
  _z = vec.getZ();
  return (*this);
}

template<typename T>
std::ostream&	Vec3<T>::operator<<(std::ostream &os)
{
  os << "x = " << _x << " | ";
  os << "y = " << _y << " | ";
  os << "z = " << _z << " |";
  return (os);
}
