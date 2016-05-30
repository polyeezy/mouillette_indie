//
// TestScene.cpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/src/Scenes
// 
// Made by Valérian Polizzi
// Login   <polizz_v@epitech.net>
// 
// Started on  Mon May 30 02:47:04 2016 Valérian Polizzi
// Last update Mon May 30 03:41:04 2016 Valérian Polizzi
//

#include <TestScene.hh>

TestScene::TestScene()
{
  this->addEntity(new Entity(new Vec3(0, 0, 0), new Vec3(10, 10, 10))); 
}

TestScene::~TestScene()
{

}
