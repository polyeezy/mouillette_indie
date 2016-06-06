//
// FordGT.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Entities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 05:01:13 2016 Valérian Polizzi
// Last update Mon Jun  6 06:20:29 2016 Valérian Polizzi
//

#ifndef _FORDGT_HH_
# define _FORDGT_HH_

# include <ACar.hh>

class FordGT : virtual public ACar
{
public:
  FordGT(Vec3 *size, Vec3 *pos);
  ~FordGT();
};

#endif
