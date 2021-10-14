#pragma once

#include <string>

namespace simpp
{
  class Exception
  {
  public:
    Exception(std::string where) :
      _where(where)
    {}

    const std::string What() const throw()
    {
      return std::string("simpp::Exception at ") + _where;
    }

  private:
    std::string _where;
  };
}
