//
// ACar.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 05:03:14 2016 Valérian Polizzi
// Last update Mon Jun  6 08:18:42 2016 Valérian Polizzi
//

#ifndef _ACAR_HH_
# define _ACAR_HH_

# include <AEntity.hh>

class ACar : public AEntity
{
private:
  float		_speed;
  float		_break;

public:
  ACar(Vec3 *size, Vec3 *pos, const std::string &);
  ~ACar();
  void		accelerate();
  void		setSpeed(const float);
  float	getSpeed() const;

};


#endif
