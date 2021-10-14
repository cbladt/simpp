#pragma once

#include <Signal/Sender.hpp>

namespace simpp::Component
{
  template <typename T>
  class ConstantSource :
      public Signal::Sender<T>
  {
  public:
    ConstantSource(T value) :
      _value(value)
    {}

    void Tick() const
    {
      this->Send(_value);
    }

  private:
    T _value;
  };
}
