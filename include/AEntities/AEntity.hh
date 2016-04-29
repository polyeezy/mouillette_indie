//
// AEntity.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 15:55:08 2016 Loïc Weinhard
// Last update Fri Apr 29 17:45:43 2016 Loïc Weinhard
//

#ifndef AENTITY_HH_
# define AENTITY_HH_

# include "Vec3.hh"

class	AEntity
{

public:
enum Type
  {
    WALL, MENUITEM, CAR, FLOOR, POWERUP, UNDEFINED
  };
  
private:
  Vec3*		_size;
  Vec3*		_pos;
  AEntity::Type	_type;
  std::string	_model;
  
public:
  AEntity(Vec3* size = NULL, Vec3* pos = NULL, const AEntity::Type = UNDEFINED, const std::string &model = "");
  ~AEntity();

  Vec3*			getSize() const;
  Vec3*			getPos() const;
  AEntity::Type		getType() const;
  const std::string&	getModel();

  void		setSize(const int width, const int height, const int depth);
  void		setSize(const Vec3*);
  void		setPos(const int x, const int y, const int z);
  void		setPos(const Vec3*);
  void		setType(const AEntity::Type);
  void		setModel(const std::string &);
};

#endif
