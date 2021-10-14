#pragma once
#include <Signal/IReceiver.hpp>
#include <iostream>

namespace simpp::Component
{
  template <typename T>
  class SinkToConsole :
      public Signal::IReceiver<T>
  {
  public:
    void Receive(T data)
    {
      std::cout << data.String() << std::endl;
    }

  };
}
