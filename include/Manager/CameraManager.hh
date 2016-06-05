//
// CameraManager.hh for  in /home/polyeezy/rendu/CPP/mouillette_indie
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Wed Jun  1 05:44:24 2016 Valérian Polizzi
// Last update Thu Jun  2 03:11:33 2016 Valérian Polizzi
//

#ifndef _CAMERAMANAGER_HH_
# define _CAMERAMANAGER_HH_

# include <irrlicht.h>
# include <Vec3.hh>

class CameraManager
{
private:
  irr::scene::ICameraSceneNode  *_camera;
public:
  CameraManager();
  ~CameraManager();

  int		setCamera(irr::scene::ICameraSceneNode  *);
  irr::scene::ICameraSceneNode  *getCamera();
};

#endif
