//
// SceneManager.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 02:29:19 2016 Valérian Polizzi
// Last update Mon May 30 03:39:02 2016 Valérian Polizzi
//

#ifndef _SCENEMANAGER_HH_
# define _SCENEMANAGER_HH_

# include <EntityManager.hh>
# include <map>
# include <string>
# include <Entities.hh>

class SceneManager
{
 private:
  EntityManager				*_currentScene;
  std::map<std::string, EntityManager*>	_scenes;
 public:
  SceneManager();
  ~SceneManager();
  int		init();
  int		preloadScene(EntityManager *scene, const std::string &name);
  int		loadScene(const std::string &sceneName);
};


#endif
