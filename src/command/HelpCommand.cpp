

#include "HelpCommand.hpp"
#include <iostream>


HelpCommand::HelpCommand(){}
HelpCommand::~HelpCommand(){}

void HelpCommand::doAction(Line& command,Env  &env)
{
  std::cout << "help Command" << std::endl;

  if(command.words.size() < 2)
    {
      std::cout << " deuxiemme argument: help second arg" << std::endl;
      return;
    }

  BaseCommand* cmd = env.get<BaseCommand*>(command.words[1]);

  if(cmd == NULL)
    {
      std::cout << "command inconue" << std::endl;
      return;
    }

  std::cout << cmd->help() << std::endl;

  return ;
}

std::string  HelpCommand::help()
{
  return "help \n ";
}
