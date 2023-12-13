#pragma once
#include <iostream>
#include "NPCDecorator.h"

class Farmer : public NPCDecorator {
public:
    Farmer(NPC* npc) : NPCDecorator(npc) {}

    void render() override {
        NPCDecorator::render();
        std::cout << " Role: Farmer";
    }
};