//
// Vec3.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 16:00:29 2016 Loïc Weinhard
// Last update Wed May 18 13:59:20 2016 Loïc Weinhard
//

#include "Vec3.hh"

Vec3::Vec3(const float x, const float y, const float z)
{
  _x = x;
  _y = y;
  _z = z;
}

Vec3::~Vec3()
{
}

float	Vec3::getX() const
{
  return _x;
}

float	Vec3::getY() const
{
  return _y;
}

float	Vec3::getZ() const
{
  return _z;
}

void	Vec3::setX(const float &x)
{
  _x = x;
}

void	Vec3::setY(const float &y)
{
  _y = y;
}

void	Vec3::setZ(const float &z)
{
  _z = z;
}

Vec3&	Vec3::operator=(const Vec3 &vec)
{
  _x = vec.getX();
  _y = vec.getY();
  _z = vec.getZ();
  return (*this);
}

std::ostream&	Vec3::operator<<(std::ostream &os)
{
  os << "x = " << _x << " | ";
  os << "y = " << _y << " | ";
  os << "z = " << _z << " |";
  return (os);
}
