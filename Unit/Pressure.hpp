#pragma once

#include <string>

namespace simpp::Unit
{
  template <typename T>
  class GenericPressure
  {
  public:
    using DataType = T;

    T GetBarAbsolute() const
    {
      return _barAbsolute;
    }

    void SetBarAbsolute(T value)
    {
      _barAbsolute = value;
    }


    T GetAbstract() const
    {
      return GetBarAbsolute();
    }

    void SetAbstract(T value)
    {
      SetBarAbsolute(value);
    }


    std::string String()
    {
      return std::to_string(_barAbsolute);
    }

  private:
    T _barAbsolute;
  };

  using Pressure = GenericPressure<float>;
}

