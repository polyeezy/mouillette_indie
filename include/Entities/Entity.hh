//
// Entity.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Entities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 03:28:03 2016 Valérian Polizzi
// Last update Mon May 30 03:36:14 2016 Valérian Polizzi
//

#ifndef _ENTITY_HH_
# define _ENTITY_HH_
# include <AEntity.hh>

class Entity : public AEntity
{
public:
  Entity(Vec3* size, Vec3* pos);
  ~Entity();
};


#endif
