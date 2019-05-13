//# virtual-memory

#include "PCB.hpp"

// PROCESS CONTROL BLOCK

//PAGE TABLE ENTRY
void PageTableEntry::setPage(uint32_t frame) {
    frameNumber = frame;
    valid = true;
};
