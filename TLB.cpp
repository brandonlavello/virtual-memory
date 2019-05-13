//# virtual-memory

#include "TLB.hpp"
#include "RAM.hpp"
#include <iostream>

//TLB Constructor initializes TLB to default values
TLB::TLB() {
        for (uint32_t i = 0; i < TLB_SIZE; i++) {
            tlb[i][0] = i;
            tlb[i][1] = 0;
        }
        tlbHit = 0;
};

//Return bool true if TLB hit
bool TLB::checkTLB(uint32_t pageTableNumber) {
    //iterate through list - if pageTableNumber == tlb
    //return true
    for (uint32_t i = 0; i < TLB_SIZE; i++) {
        if (tlb[i][0] == pageTableNumber) {
            //found it, set bool = true and break
            tlbHit = true;  
            std::cout << "\n\t\tTLB HIT\t";
            break; 
        }
    }
    return tlbHit;
};

//Return uint32_t value frame number
uint32_t TLB::getFrame(uint32_t pageTableNumber) {
    //iterate through list - if pageTableNumber == tlb
    //return frame value, else 0
    for (uint32_t i = 0; i < TLB_SIZE; i++)
    {
        if (tlb[i][0] == pageTableNumber) {
            return tlb[i][0];
        }
    }
    return 0;
};

/*
//TLB PAGE REPLACEMENT ALGORITHM
 void pushing(uint32_t temp);
        uint32_t popping();
        uint32_t LRUAlgor(TLBInitial* tlb);
        uint32_t FIFOAlgor();
    private:
        queue<uint32_t> imQueue;
} 
void TLB::pushing(uint32_t temp){
    imQueue.push(temp);
};
uint32_t TLB::popping(){
    while(!imQueue.pop() == NULL){
        uint32_t victim = imQueue.front();
        imQueue.pop();
        return victim;
    }
};
uint32_t TLB::LRUAlgor(TLBinitial* TLB){
    uint32_t value=0;
    uint32_t sorryVictim =0;

    for(uint32_t i =0; i < TLB_SIZE; i++){
        if(TLB[i])
    }
};
*/