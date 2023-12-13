#pragma once
#include <iostream>
#include "NPC.h"

class Elf : public NPC
{
public:
    Elf(const std::string &name) : NPC(name) {}

    void render() override
    {
        std::cout << "Elf: " << name << std::endl;
    }
};