//
// Vec3.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 15:56:47 2016 Loïc Weinhard
// Last update Thu May 12 13:57:58 2016 Loïc Weinhard
//

#ifndef VEC3_HH_
# define VEC3_HH_

# include <iostream>

template<typename T>class	Vec3
{
private:
  T	_x;
  T	_y;
  T	_z;

public:
  Vec3(const T x = 0, const T y = 0, const T z = 0);
  ~Vec3();

  T	getX() const;
  T	getY() const;
  T	getZ() const;

  void	setX(const T &);
  void	setY(const T &);
  void	setZ(const T &);

  Vec3&		operator=(const Vec3 &);
  std::ostream&	operator<<(std::ostream &);
};

template class Vec3<int>;
template class Vec3<long int>;
template class Vec3<float>;
template class Vec3<double>;

#endif
