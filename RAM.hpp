//# virtual-memory
//TLB.h
/*
Description:
    Ram class takes care off the physical memory that stores raze size and frame size.
*/

#include <iostream>

#ifndef RAM_HPP
#define RAM_HPP

// constant pre defined number
#define FRAME_SIZE 256
#define RAM_SIZE 256

//Status
struct Status
{
    bool accessed, dirty = false;
    uint32_t time = 0;
};

class RAM {
    public:
        RAM();
        //store value
        void store(uint32_t frameNumber, char * frame); 
        //read value 
        char read(uint32_t frameNumber, uint32_t displacement);
        int getRunningTime(int);
        
    private:
        char physicalMemory[RAM_SIZE][FRAME_SIZE];
        Status status[RAM_SIZE];

    
};

#endif