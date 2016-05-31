//
// Square.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Entities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 08:53:20 2016 Valérian Polizzi
// Last update Mon May 30 08:58:50 2016 Valérian Polizzi
//

#ifndef _SQUARE_HH_
# define _SQUARE_HH_

# include <AEntity.hh>

class Square : public AEntity
{
public:
  Square(Vec3 *size, Vec3 *pos);
  ~Square();
};

#endif
