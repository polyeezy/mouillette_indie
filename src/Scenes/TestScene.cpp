//
// TestScene.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 02:47:04 2016 Valérian Polizzi
// Last update Tue May 31 09:44:13 2016 Valérian Polizzi
//

#include <TestScene.hh>

TestScene::TestScene(irr::scene::ISceneManager     *IS) : AScene(IS)
{
  this->addEntity(new Square(new Vec3(0, 0, 0), new Vec3(0, 0, 0))); 
}

TestScene::~TestScene()
{

}
