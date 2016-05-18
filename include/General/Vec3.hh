//
// Vec3.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 15:56:47 2016 Loïc Weinhard
// Last update Wed May 18 13:59:42 2016 Loïc Weinhard
//

#ifndef VEC3_HH_
# define VEC3_HH_

# include <iostream>

class	Vec3
{
private:
  float	_x;
  float	_y;
  float	_z;

public:
  Vec3(const float x = 0, const float y = 0, const float z = 0);
  ~Vec3();

  float	getX() const;
  float	getY() const;
  float	getZ() const;

  void	setX(const float &);
  void	setY(const float &);
  void	setZ(const float &);

  Vec3&		operator=(const Vec3 &);
  std::ostream&	operator<<(std::ostream &);
};

#endif
