#pragma once

namespace simpp::Signal
{
  template <typename T>
  class IReceiver
  {
  public:
    virtual ~IReceiver() = default;
    virtual void Receive(T data) = 0;
  };
}
