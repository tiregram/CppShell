#ifndef __DEF__COMMAND__HELPCOMMAND__
#define __DEF__COMMAND__HELPCOMMAND__

#include "BaseCommand.hpp"
#include "Line.hpp"
#include <string>

class HelpCommand
{

public:
  HelpCommand();
  virtual ~HelpCommand();

  virtual void doAction(Line &command, Env &env);
  virtual std::string help();

};



#endif
