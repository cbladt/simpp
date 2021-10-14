#pragma once

namespace simpp::Signal
{
  template <typename T>
  class IHaveValue
  {
  public:
    virtual ~IHaveValue() = default;

    virtual T Get() const = 0;
  };
}
