//
// EntityManager.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 17:28:07 2016 Loïc Weinhard
// Last update Thu May 12 14:25:26 2016 Loïc Weinhard
//

#ifndef ENTITYMANAGER_HH_
# define ENTITYMANAGER_HH_

# include <vector>
# include "AEntity.hh"

template<typename T>
class	EntityManager
{
private:
  std::vector<AEntity<T> *>	_entities;

public:
  EntityManager();
  ~EntityManager();

  const std::vector<AEntity<T> *>	getEntities();
  void				addEntity(AEntity<T> *);
  void				deleteEntity(const AEntity<T> *);
  void				deleteEntitiesFromType(const typename AEntity<T>::Type);
  void				clear();

  AEntity<T>*			operator[](const size_t) const;
};

template class EntityManager<int>;
template class EntityManager<long int>;
template class EntityManager<float>;
template class EntityManager<double>;

#endif
