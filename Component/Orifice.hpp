#pragma once
#include <Signal/SimpleInput.hpp>

namespace simpp::Component
{
  template <typename T>
  class Orifice
  {
  public:
    using DataType = T;

    T Get() const
    {
      return Input.Get() * 0.8;
    }

    const SimpleInput<T> Input;
  };
}
