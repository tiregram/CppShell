#include "ReadCommand.hpp"

ReadCommand::ReadCommand()
{

}

virtual ReadCommand::~ReadCommand()
{

}

virtual void  ReadCommand::doAction(Line& l,Env &e)
{
  std::cout << "help Command" << std::endl;

  if(command.words.size() < 2)
    {
      std::cout << " deuxiemme argument: read second_arg" << std::endl;
      return;
    }

  string * cmd = env.get(command.words[1]);

}

std::string  virtual ReadCommand::help()
{

}
