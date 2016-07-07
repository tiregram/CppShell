#ifndef __DEF__COMMAND__LINE__
#define __DEF__COMMAND__LINE__

#include <string>
#include <vector>
class Line
{
private:

public:
  std::vector<std::string> words ;
  Line();
  Line(std::string &line);
  virtual ~Line();
};

#endif
