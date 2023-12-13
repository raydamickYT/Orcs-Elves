#pragma once
#include <string>
#include <iostream>

class NPC
{
protected:
    std::string name;

public:
    NPC(const std::string &name) : name(name) {}

    virtual void render() = 0; // Pure virtual function
};