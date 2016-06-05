//
// AEntity.hh for  in /home/weinha_l/Semestre_4/mouillette_indie/include/AEntities
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Fri Apr 29 15:55:08 2016 Loïc Weinhard
// Last update Sat Jun  4 10:30:08 2016 Valérian Polizzi
//

#ifndef AENTITY_HH_
# define AENTITY_HH_

# include "Vec3.hh"
# include <GraphicEntity.hh>

class	AEntity
{
public:
enum Type
  {
    WALL, MENUITEM, CAR, FLOOR, POWERUP, UNDEFINED
  };  
private:
  Vec3*			_size;
  Vec3*			_pos;
  AEntity::Type		_type;
  std::string		_model;
  GraphicEntity		*_gentity;  
  std::string		_value;
public:
  AEntity(Vec3* size = NULL, Vec3* pos = NULL, const AEntity::Type = UNDEFINED, const std::string &model = "", const std::string &value = "none");
  ~AEntity();

  Vec3*			getSize() const;
  Vec3*			getPos() const;
  AEntity::Type		getType() const;  
  std::string		getModel() const;
  std::string		getValue() const;

  void		setSize(const float width, const float height, const float depth);
  void		setSize(const Vec3*);
  void		setPos(const float x, const float y, const float z);
  void		setPos(const Vec3*);
  void		setType(const AEntity::Type);
  void		setModel(const std::string &);
  void		setValue(const std::string &);
  

  AEntity&	operator=(const AEntity &);

  GraphicEntity	*getGEntity();
  void		setGEntity();
};

#endif
