#ifndef __DEF__COMMAND__READCOMMAND__
#define __DEF__COMMAND__READCOMMAND__

#include "BaseCommand.hpp"
#include "Line.hpp"
#include "Env.hpp"

class ReadCommand: public BaseCommand
{
public:
  ReadCommand();
  virtual ~ReadCommand();
  virtual void  doAction(Line& l,Env &e);
  std::string  virtual help();
};


#endif
