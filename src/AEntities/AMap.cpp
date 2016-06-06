//
// AMap.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 11:08:29 2016 Valérian Polizzi
// Last update Mon Jun  6 11:11:16 2016 Valérian Polizzi
//

#include <AMap.hh>

AMap::AMap(Vec3 *size, Vec3 *pos, const std::string &txt) : AEntity(size, pos, AEntity::Type::MAP, txt)
{
}

AMap::~AMap()
{
}
