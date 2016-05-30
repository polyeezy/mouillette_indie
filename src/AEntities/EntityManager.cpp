//
// EntityManager.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 17:33:48 2016 Loïc Weinhard
// Last update Mon May 30 07:16:49 2016 Valérian Polizzi
//

#include <EntityManager.hh>

EntityManager::EntityManager()
{
  _gentities = new GraphicEntityManager;
}


EntityManager::~EntityManager()
{
}


const std::vector<AEntity *>	EntityManager::getEntities()
{
  return (_entities);
}


void	EntityManager::addEntity(AEntity *entity)
{
  _entities.push_back(entity);
}


void	EntityManager::deleteEntity(const AEntity *entity)
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


void	EntityManager::deleteEntitiesFromType(const typename AEntity::Type type)
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


void	EntityManager::clear()
{
  _entities.clear();
}


AEntity*	EntityManager::operator[](const size_t i) const
{
  if (i >= _entities.size())
    return (NULL);
  return _entities[i];
}

GraphicEntityManager          *EntityManager::getGraphicEntityManager()
{
  return (_gentities);
}
