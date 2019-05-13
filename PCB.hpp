//# virtual-memory
/*
Description:
    This class takes drived class from Address.hpp and gets the frame, entry,
    and populate page table
*/
#include <iostream>
using namespace std;

// Borrowing a header from...
#include "Address.hpp"

#ifndef PCB_HPP
#define PCB_HPP

// constant value numbers
#define PAGE_TABLE_SIZE 256
#define PAGE_SIZE 256

//PAGE TABLE ENTRY
struct PageTableEntry
{
    uint32_t frameNumber = 0;
    bool valid = false;

    void setPage(uint32_t frame);
};

// ProcessControlBlock
struct PCB {
    //uint32_t getFrame(uint32_t frameNumber); // get frame number in int datatype
    //PageTableEntry getEntry(uint32_t pageNumber);
    PageTableEntry pageTable[PAGE_TABLE_SIZE];  
};


#endif

//Read page table
//If nothing there, go to backing store
//load backing store into Page Table 
//page fault = page table has no data -> go into backing store -> store
