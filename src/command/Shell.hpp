#ifndef __DEF__COMMAND__SHELL__
#define __DEF__COMMAND__SHELL__
#include "Env.hpp"

class Shell
{

private:
  Env env;

public:
  Shell(Env& env);
  void run();
  void status() const;
  virtual ~Shell();
};

#endif
