//# virtual-memory

#include "TLB.hpp"

TLB::TLB() {
        for (int i = 0; i < TLB_SIZE; i++) {
            if (i > TLB_SIZE - 1){
                tlb[i][0] = -1;
                tlb[i][1] = -1;
            } else {
                tlb[i][0] = i;
                tlb[i][1] = TLB_SIZE - i;
            }
        }
        tlbHit = 0;
};

bool TLB::checkTLB(uint32_t pageTableNumber) {
    for (int i = 0; i < TLB_SIZE; i++)
    {
        if (tlb[i][0] == pageTableNumber) {
            tlbHit = true;
            std::cout << "\n\t\tTLB HIT\t";
            break;
        }
    }
    return tlbHit;
} 

/*
 void pushing(uint32_t temp);
        uint32_t popping();
        uint32_t LRUAlgor(TLBInitial* tlb);
        uint32_t FIFOAlgor();
    private:
        queue<uint32_t> imQueue;
*/
/*
void TLB::pushing(uint32_t temp){
    imQueue.push(temp);
}

uint32_t TLB::popping(){
    while(!imQueue.pop() == NULL){
        imQueue.pop();
    }
}

uint32_t TLB::LRUAlgor(TLBinitial* TLB){
    uint32_t value=0;
    uint32_t sorryVictim =0;

    for(uint32_t i =0; i < TLB_SIZE; i++){
        if(TLB[i])
    }
}
*/