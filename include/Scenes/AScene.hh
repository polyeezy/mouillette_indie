//
// AScene.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Tue May 31 08:44:17 2016 Valérian Polizzi
// Last update Sun Jun  5 05:15:58 2016 Valérian Polizzi
//

#ifndef _ASCENE_HH_
# define _ASCENE_HH_

#include <AEntity.hh>
#include <EntityManager.hh>
#include <GraphicEntityManager.hh>

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
  AScene::Type		_type;
public:
  AScene(irr::scene::ISceneManager* , const AScene::Type&);
  ~AScene();
  
  void	addEntity(AEntity *);
  GraphicEntityManager *getGraphicEntityManager();
  EntityManager		*getEntityManager();

  virtual void			addElements() = 0;
  AScene::Type		getType() const;
  virtual int		runScene() = 0;
  int			getNbItems() const;
  virtual void	        doUp() = 0;
  virtual void		doDown() = 0;
  virtual void		doAction() = 0;
};
  
#endif
