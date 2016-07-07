#ifndef __DEF__COMMAND__ENV__
#define __DEF__COMMAND__ENV__

#include <map>
#include <string>
#include <iostream>
#include "../Node/NodeType.hpp"
#include "../Node/NodeValue.hpp"


class Env
{
private:
std::map<std::string,NodeType*> values;

public:
Env();
virtual ~Env();
void add(std::string name,NodeType* env);
void remove(std::string name);

  NodeType* operator[](std::string a);

  template<typename T>
  T get(std::string name)
  {
    if( this->values.count(name))
      return ((NodeValue<T>*) (this->values[name]))->getValue();
    else
      std::cout << "error no key " << name << std::endl;

    return NULL;
  }

  template<typename T>
  void set(std::string name ,T elem)
  {
    ((NodeValue<T>*) (this->values[name]))->setValue(elem);
  }


};

#endif



