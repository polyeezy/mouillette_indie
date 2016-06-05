//
// SceneManager.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 02:29:19 2016 Valérian Polizzi
// Last update Sun Jun  5 02:30:35 2016 Valérian Polizzi
//

#ifndef _SCENEMANAGER_HH_
# define _SCENEMANAGER_HH_

# include <EntityManager.hh>
# include <map>
# include <string>
# include <Entities.hh>
# include <AScene.hh>

class SceneManager
{
 private:

  AScene					*_currentScene;
  irr::video::IVideoDriver*			_driver;
  
  std::map<std::string, AScene*>		_scenes; 
public:
  SceneManager();
  ~SceneManager();
  int		init();
  int		preloadScene(AScene *scene, const std::string &name);
  int		loadScene(const std::string &sceneName);
 
  AScene	*getCurrentScene();
  int		clear();
  //  GraphicEntityManager          *getGraphicEntityManager();
};


#endif
