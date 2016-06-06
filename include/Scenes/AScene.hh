//
// AScene.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 31 08:44:17 2016 Valérian Polizzi
// Last update Mon Jun  6 19:04:53 2016 Marc MORANT
//

#ifndef _ASCENE_HH_
# define _ASCENE_HH_

#include <AEntity.hh>
#include <EntityManager.hh>
#include <GraphicEntityManager.hh>
#include <TextureManager.hh>

class AScene
{
public:
  enum	Type
    {
      MENU,
      GAME
    };
private:
  EntityManager		*_entities;
  GraphicEntityManager	*_gentities;
  TextureManager	*_TM;
  AScene::Type		_type;
  std::string		_action;
public:
  AScene(irr::scene::ISceneManager* , irr::video::IVideoDriver*,  const AScene::Type&);
  ~AScene();
  
  void	addEntity(AEntity *);
  GraphicEntityManager *getGraphicEntityManager();
  EntityManager		*getEntityManager();

    virtual void			addElements() = 0;
  AScene::Type		getType() const;
  // virtual int		runScene() = 0;
  int			getNbItems() const;
  virtual void	        doUp() = 0;
  virtual void		doDown() = 0;
  virtual void	        doLeft() = 0;
  virtual void		doRight() = 0;
  virtual void		doAction() = 0;

  void			setAction(const std::string &);
const std::string		&getAction();

};
  
#endif
