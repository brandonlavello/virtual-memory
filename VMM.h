#include "Address.h"
#include "MMU.h"
#include "PCB.h"
#include "BackStore.h"
#include "RAM.h"

//VMM.h

class VMM {

private:
    MemoryManagementUnit mmu;

public:
    VMM(); 
    
    void readInt();

};