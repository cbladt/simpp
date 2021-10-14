#pragma once

#include <Signal/IHaveValue.hpp>
#include <Exception.hpp>

namespace simpp
{
  template <typename Parent_t>
  class SimpleInput :
      public Signal::IHaveValue<T>
  {
  public:
    using T = typename Parent_t::DataType;

    SimpleInput(Parent_t& parent) :
      _value(nullptr),
      _parent(parent)
    {}

    ~SimpleInput() = default;

    SimpleInput(const SimpleInput&) = delete;
    SimpleInput& operator=(const SimpleInput&) = delete;

    SimpleInput(SimpleInput&&) = delete;
    SimpleInput& operator=(SimpleInput&&) = delete;

    T Get() const
    {
      if (_value != nullptr)
      {
        return _value->Get();
      }
      else
      {
        throw simpp::Exception("SimpleInput");
      }
    }

    void Connect(Signal::IHaveValue<T>& value) const
    {
      auto& ths = *(const_cast<SimpleInput<T>*>(this));
      ths._value = &value;
    }

  private:
    Signal::IHaveValue<T>* _value;
    Parent_t& _parent;
  };
}
