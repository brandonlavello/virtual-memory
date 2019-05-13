//# virtual-memory

#include "PCB.hpp"
// definitions fomr PCB.hpp files


// // PROCESS CONTROL BLOCK
// PageTableEntry PCB::getEntry(uint32_t pageNumber){
//     return pageTable[pageNumber];
// }

// uint32_t PCB::getFrame(uint32_t frameNumber){
//     return pageTable[frameNumber].frameNumber; 
// }


//PAGE TABLE ENTRY
void PageTableEntry::setPage(uint32_t frame) {
    frameNumber = frame;
    valid = true;
};

// uint32_t getFrameNumber(){
//     return frameNumber;
// }
// bool checkValidation(){
//     return valid;
// }

