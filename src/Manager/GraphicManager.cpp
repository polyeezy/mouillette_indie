//
// GraphicManager.cpp for hypertrack in /home/polyeezy/rendu/CPP/mouillette_indie/src/Manager
//
// Made by Valérian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Fri Apr 29 06:16:21 2016 Valérian Polizzi
// Last update Mon May 30 07:20:04 2016 Valérian Polizzi
//

#include <GraphicManager.hh>

GraphicManager::GraphicManager()
{
  _CM = new ControllerManager;
  _CM->importConf();
}

GraphicManager::~GraphicManager()
{
  _device->drop();
}

int	GraphicManager::init(const size_t &w, const size_t &h)
{
  _SM = new SceneManager;

  _SM->preloadScene(new TestScene, "testScene");
  _SM->loadScene("testScene");
  _device = irr::createDevice(irr::video::EDT_SOFTWARE, irr::core::dimension2d<irr::u32>(w, h), 16, false, false, false, _CM);
  _device->setWindowCaption(L"HyperSprint");
  _driver = _device->getVideoDriver();
  _SM->getCurrentScene()->getGraphicEntityManager()->setScene(_device->getSceneManager());
  return (0);
}

int	GraphicManager::render()
{
  _driver->beginScene(true, true, irr::video::SColor(255,100,101,140));
  _SM->getCurrentScene()->getGraphicEntityManager()->getScene()->drawAll();
  return (0);
}

bool	GraphicManager::isRunning() const
{
  return (_device->run());
}

int	GraphicManager::refresh()
{
  return (_driver->endScene());
}

int	GraphicManager::openWindow()
{
  while (this->isRunning())
    {
      this->render();
      this->refresh();
    }
  return (0);
}

SceneManager	*GraphicManager::getSceneManager()
{
  return (this->_SM);
}

ControllerManager	*GraphicManager::getControllerManager()
{
  return (this->_CM);
}
