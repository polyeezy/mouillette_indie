//
// EntityManager.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 17:33:48 2016 Loïc Weinhard
// Last update Thu May 12 14:23:25 2016 Loïc Weinhard
//

#include "EntityManager.hh"

template<typename T>
EntityManager<T>::EntityManager()
{
}

template<typename T>
EntityManager<T>::~EntityManager()
{
}

template<typename T>
const std::vector<AEntity<T> *>	EntityManager<T>::getEntities()
{
  return (_entities);
}

template<typename T>
void	EntityManager<T>::addEntity(AEntity<T> *entity)
{
  _entities.push_back(entity);
}

template<typename T>
void	EntityManager<T>::deleteEntity(const AEntity<T> *entity)
{
  size_t	i;

  i = 0;
  while (i < _entities.size())
    {
      if (entity == _entities[i])
	{
	  _entities.erase(_entities.begin() + i);
	  return;
	}
      i += 1;
    }
}

template<typename T>
void	EntityManager<T>::deleteEntitiesFromType(const typename AEntity<T>::Type type)
{
  size_t	i;

  i = 0;
  while (i < _entities.size())
    {
      if (_entities[i]->getType() == type)
	_entities.erase(_entities.begin() + i);
      i += 1;
    }
}

template<typename T>
void	EntityManager<T>::clear()
{
  _entities.clear();
}

template<typename T>
AEntity<T>*	EntityManager<T>::operator[](const size_t i) const
{
  if (i >= _entities.size())
    return (NULL);
  return _entities[i];
}
