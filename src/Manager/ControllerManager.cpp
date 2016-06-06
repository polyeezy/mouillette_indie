//
// ControllerManager.cpp for  in /home/weinha_l/Semestre_4/mouillette_indie/src/Manager
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Wed May 11 14:44:53 2016 Loïc Weinhard
// Last update Mon Jun  6 21:55:04 2016 Marc MORANT
//

#include "ControllerManager.hh"
#include "GraphicManager.hh"

ControllerManager::ControllerManager()
{
  for (int x = 0; x < CM_CONTROL_COUNT; x++)
    this->_keysDown[x] = false;
}

void	ControllerManager::importConf()
{
  std::ifstream is(CM_CONF_PATH);
  std::string   line;
  int           key;
  int           value;

  std::cout << CM_CONF_PATH << std::endl;
  while (std::getline(is, line))
    {
      std::stringstream ss(line);
      ss >> key >> value;
      std::cout << "Mapping " << key << " with " << value << std::endl;
      this->mapKey(key, value);
    }
}

void	ControllerManager::exportConf()
{
  std::ofstream file(_path.c_str());

  for (std::map<int, int>::iterator it = _key_map.begin(); it != _key_map.end(); it++)
    {
      file << it->first << " " << it->second << '\n';
    }

}

void	ControllerManager::setConfPath(const std::string &path)
{
  _path = path;
}

void	ControllerManager::setMapKey(const int key, const int value)
{
  _key_map[value] = key;
}

void            ControllerManager::mapKey(const int key, const int value)
{
  _key_map[value] = key;
}

bool  ControllerManager::isKeyDown(const e_control enumKey) const
{
  return this->_keysDown[enumKey];
}

// bool ControllerManager::OnEvent(const irr::SEvent &event)
// {
//   if (event.EventType == irr::EET_KEY_INPUT_EVENT)
//     {
//       int       realKey = -1;

//       for (std::map<int, int>::iterator it = _key_map.begin(); it != _key_map.end(); it++)
// 	{
//           if (it->first == event.KeyInput.Key)
//             realKey = it->second;
//         }
//       if (realKey != -1)
// 	this->_keysDown[realKey] = event.KeyInput.PressedDown;
//     }
//   return false;
// }

bool ControllerManager::OnEvent(const irr::SEvent &event)
{
  if (event.EventType == irr::EET_KEY_INPUT_EVENT)
    {
      {
	int       realKey = -1;
	
	for (std::map<int, int>::iterator it = _key_map.begin(); it != _key_map.end(); it++)
	  {
	    if (it->first == event.KeyInput.Key)
	      realKey = it->second;
	    }
	if (realKey != -1)
	  this->_keysDown[realKey] = event.KeyInput.PressedDown;
      }
      {
      	if (event.EventType == irr::EET_KEY_INPUT_EVENT && event.KeyInput.PressedDown)
      	  {
      	    switch (_key_map[event.KeyInput.Key])
      	      {
      	      case ControllerManager::Control::UP:
      		_scene->getCurrentScene()->doUp();
      		break;
      	      case ControllerManager::Control::DOWN:
      		_scene->getCurrentScene()->doDown();
      		break;
      	      case ControllerManager::Control::LEFT:
      		std::cout << "(LEFT)" << std::endl;
      		_scene->getCurrentScene()->doLeft();
      		break;
      	      case ControllerManager::Control::RIGHT:
      		_scene->getCurrentScene()->doRight();
      		std::cout << "(RIGHT)" << std::endl;
      		break;
      	      case ControllerManager::Control::ESCAPE:
      		std::cout << "(ESCAPE)" << std::endl;
      		break;
      	      case ControllerManager::Control::PAUSE:
      		std::cout << "(PAUSE)" << std::endl;
      		break;
      	      case ControllerManager::Control::ACTION:
      		_scene->clear();
      		std::cout << "LOADING : " <<  _scene->getCurrentScene()->getAction() << std::endl;
      		_scene->getCurrentScene()->doAction();
		
      		_scene->loadScene(_scene->getCurrentScene()->getAction());
      		break;
      	      default:
      		std::cout << "(unkown)" << std::endl;
      		break;
      	      }
      	  }
      	return true;
      }
    }
  return false;
}

void		ControllerManager::interpretKeys(void)
{
  for (int x = 0; x < CM_CONTROL_COUNT; x++)
    {
      if (this->_keysDown[x])
	{
	  switch (x)
	    {
	    case ControllerManager::Control::UP:
	      std::cout << "(UP)" << std::endl;
	      _scene->getCurrentScene()->doUp();
	      break;
	    case ControllerManager::Control::DOWN:
	      std::cout << "(DOWN)" << std::endl;
	      _scene->getCurrentScene()->doDown();
	      break;
	    case ControllerManager::Control::LEFT:
	      std::cout << "(LEFT)" << std::endl;
	      _scene->getCurrentScene()->doLeft();
	      break;
	    case ControllerManager::Control::RIGHT:
	      _scene->getCurrentScene()->doRight();
	      std::cout << "(RIGHT)" << std::endl;
	      break;
	    case ControllerManager::Control::ESCAPE:
	      std::cout << "(ESCAPE)" << std::endl;
	      break;
	    case ControllerManager::Control::PAUSE:
	      std::cout << "(PAUSE)" << std::endl;
	      break;
	    case ControllerManager::Control::ACTION:
	      _scene->clear();
	      std::cout << "LOADING : " <<  _scene->getCurrentScene()->getAction() << std::endl;
	      _scene->getCurrentScene()->doAction();		
	      _scene->loadScene(_scene->getCurrentScene()->getAction());
	      break;
	    default:
	      std::cout << "(unkown)" << std::endl;
	      break;	      
	    }
	}
    }
    //   if (event.EventType == irr::EET_KEY_INPUT_EVENT && event.KeyInput.PressedDown)
    // 	{
    // 	  switch (_key_map[event.KeyInput.Key])
    // 	    {
    // 	    case ControllerManager::Control::UP:
    // 	      _scene->getCurrentScene()->doUp();
    // 	      break;
    // 	    case ControllerManager::Control::DOWN:
    // 	      _scene->getCurrentScene()->doDown();
    // 	      break;
    // 	    case ControllerManager::Control::LEFT:
    // 	      std::cout << "(LEFT)" << std::endl;
    // 	      _scene->getCurrentScene()->doLeft();
    // 	      break;
    // 	    case ControllerManager::Control::RIGHT:
    // 	      _scene->getCurrentScene()->doRight();
    // 	      std::cout << "(RIGHT)" << std::endl;
    // 	      break;
    // 	    case ControllerManager::Control::ESCAPE:
    // 	      std::cout << "(ESCAPE)" << std::endl;
    // 	      break;
    // 	    case ControllerManager::Control::PAUSE:
    // 	      std::cout << "(PAUSE)" << std::endl;
    // 	      break;
    // 	    case ControllerManager::Control::ACTION:
    // 	      _scene->clear();
    // 	      std::cout << "LOADING : " <<  _scene->getCurrentScene()->getAction() << std::endl;
    // 	      _scene->getCurrentScene()->doAction();		
    // 	      _scene->loadScene(_scene->getCurrentScene()->getAction());
    // 	      break;
    // 	    default:
    // 	      std::cout << "(unkown)" << std::endl;
    // 	      break;

    // 	    }
    // 	}
    //   return true;
    // }
}

int		ControllerManager::linkScene(SceneManager *scene)
{
  _scene = scene;
  return (0);
}
