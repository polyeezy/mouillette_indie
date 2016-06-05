//
// CameraManager.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Manager
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Wed Jun  1 05:44:06 2016 Valérian Polizzi
// Last update Thu Jun  2 03:10:52 2016 Valérian Polizzi
//

#include <CameraManager.hh>

CameraManager::CameraManager()
{
}

CameraManager::~CameraManager()
{
}

int CameraManager::setCamera(irr::scene::ICameraSceneNode  *cam)
{
  _camera = cam;
  return (0);
}

irr::scene::ICameraSceneNode  *CameraManager::getCamera()
{
  return (_camera);
}

