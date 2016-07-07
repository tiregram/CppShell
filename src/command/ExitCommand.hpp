#ifndef __DEF__COMMAND__EXITCOMMAND__
#define __DEF__COMMAND__EXITCOMMAND__

#include "BaseCommand.hpp"
#include "Line.hpp"
#include "Env.hpp"

class ExitCommand: public BaseCommand
{

public:
  ExitCommand();
  virtual ~ExitCommand();
  virtual void  doAction(Line& l,Env &e);
  std::string  virtual help();

};


#endif
