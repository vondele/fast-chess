#pragma once

#include "engine.h"

class UciEngine : public Engine
{
  public:
    UciEngine() : Engine()
    {
    }

    UciEngine(Engine engine)
    {
        setEngine(engine);
    }

    void sendUci();
    std::vector<std::string> readUci();

    void sendQuit();
    void sendSetoption(const std::string &name, const std::string &value);
    void sendGo(const std::string &limit);

    void setEngine(const Engine &rhs);

    void startEngine(const std::string &cmd /* cmd and , add engines options here*/);
    void stopEngine();

  private:
};