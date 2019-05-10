//# virtual-memory

#include "MMU.h"
#include <iostream>
using namespace std;
/*
 MemoryManagementUnit();

        void readAddress(int);
        void pageCount();
        void pageFault();
        void TLBCount();
        void TLBFault();
        void pageFaultRATE();
        void TLBFAULTRATE();
 int page_access_count;
        int page_in_faults;
        int tlb_access_count;
        int tlb_faults;
*/
MemoryManagementUnit::MemoryManagementUnit() { // constructor to make it default zero
    page_access_count = 0;
    page_in_faults = 0;
    tlb_access_count = 0;
    tlb_faults = 0;
};

void MemoryManagementUnit::readAddress(int address) { // read address to output first 8 bit into page and last 8 bit to fault
    int offset;
    int pageNum;

    pageNum = (address & 0xFFFF) >> 8;
    cout << "pageNum: " << pageNum << endl;

    offset = address & 0xFF; 
    cout << "offset: " << offset <<endl;
};
void MemoryManagementUnit::pageCount(){
    page_access_count++;
}
void MemoryManagementUnit::pageFault(){
    page_in_faults++;
}
void MemoryManagementUnit::TLBCount(){
    tlb_access_count++;
}
void MemoryManagementUnit::TLBFault(){
    tlb_faults++;
}
void MemoryManagementUnit::pageFaultRATE(){
    
}