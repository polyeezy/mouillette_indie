//
// SceneManager.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 02:33:27 2016 Valérian Polizzi
// Last update Sun Jun  5 08:56:25 2016 Valérian Polizzi
//

#include <SceneManager.hh>

SceneManager::SceneManager() : _currentScene(NULL)
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
  _currentScene = _scenes[sceneName];
  _currentScene->addElements();
  return (0);
}

int		SceneManager::clear()
{
  int		i = 0;

  while (i != _currentScene->getNbItems())
    {
      _currentScene->getEntityManager()->getEntities()[i]->getGEntity()->getGraphic()->remove();
      i++;
    }
  return (0);
}
