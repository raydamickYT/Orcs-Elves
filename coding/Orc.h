#pragma once
#include <iostream>
#include "NPC.h"

class Orc : public NPC
{
public:
    Orc(const std::string &name) : NPC(name) {}

    void render() override
    {
        std::cout << "Orc: " << name << std::endl;
    }
};