#pragma once
#include <iostream>
#include "NPC.h"

class NPCDecorator : public NPC {
protected:
    NPC* decoratedNPC;

public:
    NPCDecorator(NPC* npc) : NPC(""), decoratedNPC(npc) {}

    void render() override {
        decoratedNPC->render();
    }
};