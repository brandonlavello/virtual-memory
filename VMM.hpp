#include "Address.hpp"
#include "MMU.hpp"
//#include "PCB.hpp"
//#include "BackStore.hpp"
//#include "RAM.hpp"

//VMM.h

class VMM {

private:
    MMU mmu;

public:
    VMM(); 
    
    void readInput(uint32_t addr);
};