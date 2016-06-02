//
// SceneManager.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 02:33:27 2016 Valérian Polizzi
// Last update Tue May 31 09:46:11 2016 Valérian Polizzi
//

#include <SceneManager.hh>

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

int		SceneManager::init()
{
  return (0);
}

AScene	*SceneManager::getCurrentScene()
{
  return (_currentScene);
}

int		SceneManager::preloadScene(AScene *scene, const std::string &sceneName)
{
   std::cout << "SETTING SCENE : " << sceneName << std::endl;
  _scenes[sceneName] = scene;
   std::cout << "PRELOADING SCENE : " << sceneName << std::endl;
  return (0);
}

int		SceneManager::loadScene(const std::string &sceneName)
{
  std::cout << "LOADING SCENE : " << sceneName << std::endl;
  _currentScene = _scenes[sceneName];
 
  std::cout << "SETTING GRAPHIC SCENE" << std::endl;
  return (0);
}
