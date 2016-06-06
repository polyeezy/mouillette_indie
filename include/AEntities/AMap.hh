//
// AMap.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/AEntities
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon Jun  6 11:05:54 2016 Valérian Polizzi
// Last update Mon Jun  6 11:10:45 2016 Valérian Polizzi
//

#ifndef _AMAP_HH_
# define _AMAP_HH_

# include <AEntity.hh>

class AMap : public AEntity
{
public:
  AMap(Vec3 *size, Vec3 *pos, const std::string &);
  ~AMap();
};

#endif
