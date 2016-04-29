//
// Vec3.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 15:56:47 2016 Loïc Weinhard
// Last update Fri Apr 29 16:34:39 2016 Loïc Weinhard
//

#ifndef VEC3_HH_
# define VEC3_HH_

# include <iostream>

class	Vec3
{
private:
  int	_x;
  int	_y;
  int	_z;

public:
  Vec3(const int x = 0, const int y = 0, const int z = 0);
  ~Vec3();

  int	getX() const;
  int	getY() const;
  int	getZ() const;

  void	setX(const int &);
  void	setY(const int &);
  void	setZ(const int &);

  Vec3&		operator=(const Vec3 &);
  std::ostream&	operator<<(std::ostream &);
};

#endif
