#include "command/Shell.hpp"

int main(int argc, char *argv[])
{
  Env p = Env();
  Shell m = Shell(p);

  m.run();

  return 0;
}
