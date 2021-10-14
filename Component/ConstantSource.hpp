#pragma once

#include <Signal/IHaveValue.hpp>

namespace simpp::Component
{
  template <typename T>
  class ConstantSource :
      public Signal::IHaveValue<T>
  {
  public:
    T Get() const
    {
      return 1;
    }
  };
}
