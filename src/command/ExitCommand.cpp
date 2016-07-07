#include <string>
#include "ExitCommand.hpp"
#include <iostream>

ExitCommand::ExitCommand()
{

}

ExitCommand::~ExitCommand()
{

}


void ExitCommand::doAction(Line& l , Env &env)
{
  std::cout << "exit Run" << std::endl;
  env.set<std::string>("status","exit");
}

std::string ExitCommand::help()
{
  return "exit le program";
}
