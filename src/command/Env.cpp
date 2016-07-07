#include "Env.hpp"
#include "BaseCommand.hpp"
#include "ExitCommand.hpp"
#include "HelpCommand.hpp"

Env::Env()
{
  std::map<std::string,BaseCommand*>*
    cmdDefault = new std::map<std::string,BaseCommand*>();

  this->add("exit",new NodeValue<ExitCommand*>(new ExitCommand()));
  this->add("help",new NodeValue<HelpCommand*>(new HelpCommand()));
}

Env::~Env()
{

}

void Env::add(std::string name, NodeType* env)
{
  this->values[name] = env;
}

void Env::remove(std::string name)
{

}

NodeType* Env::operator[](std::string name)
{
  return this->values[name] ;
}
