#pragma once

#include <vector>
#include <Signal/IReceiver.hpp>

namespace simpp::Signal
{
  template <typename T>
  class Sender
  {
  public:
    Sender() = default;
    virtual ~Sender() = default;

    Sender(const Sender&) = default;
    Sender& operator=(const Sender&) = default;

    Sender(Sender&&) = default;
    Sender& operator=(Sender&&) = default;

    void SendTo(IReceiver<T>& receiver)
    {
      _receivers.push_back(&receiver);
    }

    void Send(T data) const
    {
      for (auto& receiver : _receivers)
      {
        receiver->Receive(data);
      }
    }

  private:
    std::vector<IReceiver<T>*> _receivers;
  };
}
