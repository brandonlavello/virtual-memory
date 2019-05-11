//VMM.cpp
#include "VMM.hpp"

VMM::VMM () {

};

void VMM::readInput(uint32_t addr) {
    mmu.readAddress(addr);
};