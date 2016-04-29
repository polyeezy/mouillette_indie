//
// StudioException.hpp for  in /home/polyeezy/rendu/CPP/mouillette_indie/include/General
//
// Made by Valérian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Fri Apr 29 06:29:18 2016 Valérian Polizzi
// Last update Fri Apr 29 06:37:52 2016 Valérian Polizzi
//

#ifndef _STUDIOEXCEPTION_HPP_
# define _STUDIOEXCEPTION_HPP_

# include <exception>
# include <string>

namespace studio
{
  class Exception : public std::exception
  {
  private:
    std::string _msg;
  public:
    Exception(const std::string &msg) : _msg(msg){}
    virtual ~Exception() throw () {}
    virtual const char * what () const throw()
    {
      return (_msg.c_str());
    }
  };
}

#endif
