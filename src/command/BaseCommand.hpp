#ifndef __DEF__COMMAND__BASECOMMAND__
#define __DEF__COMMAND__BASECOMMAND__

#include "Line.hpp"
#include "Env.hpp"
#include <string>

class BaseCommand
{

public:

  BaseCommand();
  virtual ~BaseCommand();

  virtual void   doAction(Line &l,Env &e)=0;
  virtual std::string   help()=0;

};


#endif
