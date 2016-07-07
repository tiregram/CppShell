#ifndef __DEF__COMMAND__INTERPRETER__
#define __DEF__COMMAND__INTERPRETER__

#include "Env.hpp"
#include "Line.hpp"

class Interpreter
{
public:

  static Interpreter getInstance()
  {
    if (Interpreter::notReady == true)
      {
        Interpreter::instance = Interpreter();
      }
    return Interpreter::instance;
  }

  virtual ~Interpreter();

  void execute(Line line , Env env );

  static bool  notReady;

private:

  static Interpreter instance;
  


  Interpreter();
};





#endif
