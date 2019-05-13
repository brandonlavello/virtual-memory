//# virtual-memory
//TLB.h
/*
Description:
    TLB class checks if the tlb hit and validates.
*/
#include <iostream>
#include <queue> // using STL queue

const uint32_t TLB_SIZE = 16;

#ifndef TLB_HPP
#define TLB_HPP

//CODE HERE
struct TLBInitial{
    uint32_t frameNum;
    uint32_t pageNum;
};
struct TLBEntry {

};


class TLB {
    public:
        TLB();
        uint32_t tlb[TLB_SIZE][2];
        bool tlbHit;
        bool checkTLB(uint32_t pageTableNumber);
        uint32_t getFrame(uint32_t pageTableNumber);

        void tlbReplacement(uint32_t );

       //Queue: push, pop and algorithms
        void pushing(uint32_t temp);
        uint32_t popping();
        uint32_t LRUAlgor(TLBInitial* tlb);
        uint32_t FIFOAlgor();

    private:
        std::queue<uint32_t> imQueue;
};



#endif

