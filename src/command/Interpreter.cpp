#include "Interpreter.hpp"
#include "BaseCommand.hpp"
#include "Env.hpp"
#include "Line.hpp"

bool Interpreter::notReady = true;
Interpreter Interpreter::instance ;
Interpreter::Interpreter()
{


}


Interpreter::~Interpreter(){}

void Interpreter::execute(Line line , Env env )
{
  std::string wordCommand = line.words[0];
  BaseCommand *  bc  = env.get<BaseCommand*>(wordCommand);
  if(bc == NULL)
    std::cout << "Command undefined: " << wordCommand << std::endl;
  else
    bc->doAction(line,env);

}
