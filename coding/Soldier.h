#pragma once
#include <iostream>
#include "NPCDecorator.h"

class Soldier : public NPCDecorator {
public:
    Soldier(NPC* npc) : NPCDecorator(npc) {}

    void render() override {
        NPCDecorator::render();
        std::cout << " Role: Soldier";
    }
};