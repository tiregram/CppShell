
#ifndef __DEF__NODE__NODEVALUE__
#define __DEF__NODE__NODEVALUE__

#include "NodeType.hpp"

template<typename T>
class NodeValue:public NodeType
{

public:
  T value;
  virtual T getValue(){return this->value;}
  virtual void setValue(T val){this->value= val;}

  NodeValue(T val)
  {this->setValue(val);}
  virtual ~NodeValue(){}
};



#endif
