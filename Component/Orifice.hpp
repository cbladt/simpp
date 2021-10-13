#pragma once

namespace simpp::Component
{
  template <typename T>
  class Orifice
  {
  public:
    using DataType = T;

  protected:
    T Handle(T input)
    {
      return input * 0.9;
    }
  };
}
