#pragma once
#include <iostream>
#include "NPCDecorator.h"

class Shaman : public NPCDecorator {
public:
    Shaman(NPC* npc) : NPCDecorator(npc) {}

    void render() override {
        NPCDecorator::render();
        std::cout << " Role: Shaman";
    }
};