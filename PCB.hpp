//# virtual-memory
#include <iostream>
using namespace std;

#ifndef PCB_HPP
#define PCB_HPP

// constant value numbers
#define PAGE_TABLE_SIZE 256
#define PAGE_SIZE 256
// Borrowing a header from...
#include "Address.hpp"
/*
struct PageTableEntry{    // erase this::  PageTableEntry
    int frameNumber = 0;
    int getFrameNum() {
        return frameNumber;
    }
};

struct PCB {        // ProcessControlBlock
    public:
        int getFrame(int); // get frame number in int datatype
        PageTableEntry getEntry(int);

    private:
        PageTableEntry pTE[PAGE_TABLE_SIZE];
};

*/

struct PageTableEntry{
    uint32_t frameNum =0;
    bool isValid = false;
    void addingPageEntry(uint32_t frame){
        frameNum = frame;
        isValid = true;
    }
    uint32_t getFframeNum(){
        return frameNum;
    }
    bool checkValidation(){
        return isValid;
    }
};
class PCB{
    private:
        PCB pageTable[PAGE_TABLE_SIZE];
    public:
        void updatePageTable(uint32_t pageNum, uint32_t frameNum);
        void
};
#endif

//Read page table
//If nothing there, go to backing store
//load backing store into Page Table 
//page fault = page table has no data -> go into backing store -> store