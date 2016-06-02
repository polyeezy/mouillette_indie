//
// EntityManager.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 17:28:07 2016 Loïc Weinhard
// Last update Tue May 31 08:40:16 2016 Valérian Polizzi
//

#ifndef ENTITYMANAGER_HH_
# define ENTITYMANAGER_HH_

# include <vector>
# include <AEntity.hh>
# include <Entities.hh>

# define P2M	std::string("../../materials")

class	EntityManager
{
private:
  std::vector<AEntity*>	_entities;
public:
  EntityManager();
  ~EntityManager();
  const std::vector<AEntity*>	getEntities();
  void				addEntity(AEntity *);
  void				deleteEntity(const AEntity *);
  void				deleteEntitiesFromType(const typename AEntity::Type);
  void				clear();
  AEntity*			operator[](const size_t) const;
  
};

#endif
