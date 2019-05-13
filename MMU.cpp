//# virtual-memory
#include "MMU.hpp"

#include <iostream>
using namespace std;

MMU::MMU() { // constructor to make it default zero
    _page_access_count = 0;
    _page_in_faults = 0;
    _tlb_access_count = 0;
    _tlb_faults = 0;
    tlb = new TLB();
};

// read address and store in address obj 
//to output first 8 bit into page and last 8 bit to fault
void MMU::readAddress(int addr) { 
    int offset;
    int pageNum;

    pageNum = (addr & 0xFFFF) >> 8;
    //cout << "pageNum: " << pageNum << endl;
    offset = addr & 0xFF; 
    //cout << "offset: " << offset <<endl;

    _address.setPage(pageNum);
    _address.setDisplacement(offset);
    _address.setAddress(addr);
};
Address MMU::getAddress()
{
    return _address;
}
// uint32_t getFrame(){

// }

void MMU::incrementPageCount(){
    _page_access_count++;
}
void MMU::incrementPageFault(){
    _page_in_faults++;
}
void MMU::incrementTLBCount(){
    _tlb_access_count++;
}
void MMU::incrementTLBFault(){
    _tlb_faults++;
}
double MMU::getPageFaultRate() {
    return double(_page_in_faults / ((_page_access_count + _page_in_faults)) * 100);
}
double MMU::getTLBFaultRate() {
    return double(1 - (_tlb_faults / _tlb_access_count)) * 100;
}

void MMU::getPageCount(){
   cout << endl; // just for now 
}