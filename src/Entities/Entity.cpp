//
// Entity.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Entities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 03:30:59 2016 Valérian Polizzi
// Last update Mon May 30 03:36:33 2016 Valérian Polizzi
//

#include <Entity.hh>

Entity::Entity(Vec3* size, Vec3* pos) : AEntity(size, pos, AEntity::UNDEFINED, "")
{
}

Entity::~Entity()
{
}
