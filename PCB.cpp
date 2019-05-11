//# virtual-memory

#include "PCB.hpp"
// definitions fomr PCB.hpp files

int PCB::getFrame(int pageNum){
    return pTE[pageNum].getFrameNum();
}
