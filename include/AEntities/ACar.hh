//
// ACar.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 05:03:14 2016 Valérian Polizzi
// Last update Mon Jun  6 18:31:07 2016 Marc MORANT
//

#ifndef _ACAR_HH_
# define _ACAR_HH_

# include <AEntity.hh>
# include <math.h>

class ACar : public AEntity
{
private:
  float		_speed;
  float		_break;

public:
  ACar(Vec3 *size, Vec3 *pos, const std::string &);
  ~ACar();

  void		Accelerate();
  void	        Break();
  void	        RotateRight();
  void	        RotateLeft();
  void		Refresh();

  void		setSpeed(const float);
  float	getSpeed() const;
  void		setBreak(const float);
  float	getBreak() const;
};


#endif
