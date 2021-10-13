#pragma once

namespace simpp
{
  template <typename Component_t>
  class IOBlock
  {
  public:
    using DataType = typename Component_t::DataType;
    using Component = Component_t;

  private:
    void Receive(DataType message)
    {
       Send(_component.Handle(message));
    }

    void Send(DataType mesasge)
    {

    }

    Component _component;
  };
}
