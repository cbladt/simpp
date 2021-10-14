#pragma once
#include <Unit/Pressure.hpp>
#include <Signal/IReceiver.hpp>
#include <Signal/Sender.hpp>

namespace simpp::Component
{      
  template <typename T>
  class Gain :
      public Signal::IReceiver<T>,
      public Signal::Sender<T>
  {
  public:        
    Gain(float gain) :
      _gain(gain)
    {}
    ~Gain() = default;

    Gain(const Gain&) = default;
    Gain& operator=(const Gain&) = default;

    Gain(Gain&&) = default;
    Gain& operator=(Gain&&) = default;

    void Receive(T data)
    {
      auto value = data.GetAbstract();

      value *= _gain;

      data.SetAbstract(value);

      this->Send(data);
    }

  private:
    float _gain;
  };
}
