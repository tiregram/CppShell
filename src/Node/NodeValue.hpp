
#ifndef __DEF__NODE__NODEVALUE__
#define __DEF__NODE__NODEVALUE__
#include <string>
#include "NodeType.hpp"


template<typename T>
class NodeValue:public NodeType
{

public:
  T value;
  virtual T getValue(){return this->value;}
  virtual void setValue(T val){this->value= val;}

  virtual std::string toString()
  {
    return std::toString(this->value);
  }

  virtual void fromString(std::string str)
  {
    std::stringstream convert(str);
    convert >> this->value;
  }

  NodeValue(T val)
  {this->setValue(val);}
  virtual ~NodeValue(){}
};



#endif
