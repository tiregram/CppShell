#include "Line.hpp"

#include <boost/algorithm/string.hpp>

Line::Line(std::string& line)
{
  boost::split(words,line,boost::is_any_of(" "));
}

Line::Line()
{

}

Line::~Line()
{

}
