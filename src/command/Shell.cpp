
#include <iostream>
#include <string>
#include "../Node/NodeType.hpp"
#include "../Node/NodeValue.hpp"
#include "BaseCommand.hpp"


#include "Shell.hpp"
#include "Interpreter.hpp"
#include "Line.hpp"

Shell::Shell(Env& env)
{
  this->env =  Env(env);
  this->env.add("status",new NodeValue<std::string>("test"));
}

void Shell::run() 
{

  std::cout << "shell :" << std::endl ;
  std::string command;
  bool exit = false;

  while(this->env.get<std::string>("status") == "test")
    {
      std::cout << ">" ;
      std::getline(std::cin,command);
      Line lineToExecute = Line(command);

      Interpreter::getInstance().execute(lineToExecute,this->env);
      
    }

}

void Shell::status() const
{

}


 Shell::~Shell()
 {

 }

