//# virtual-memory
#include "MMU.hpp"

#include <iostream>
using namespace std;

MMU::MMU() { // constructor to make it default zero
    _page_access_count = 0;
    _page_in_faults = 0;
    _tlb_access_count = 0;
    _tlb_faults = 0;
};

// read address and store in address obj 
//to output first 8 bit into page and last 8 bit to fault
void MMU::readAddress(int addr) { 
    int offset;
    int pageNum;

    pageNum = (addr & 0xFFFF) >> 8;
    cout << "pageNum: " << pageNum << endl;

    offset = addr & 0xFF; 
    cout << "offset: " << offset <<endl;

    _address.setPage(pageNum);
    _address.setDisplacement(offset);
    _address.setAddress(addr);

};
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
void MMU::pageFaultRATE(){
    cout << endl << endl;
    double pageFaultRate = (_page_in_faults / ((double)(_page_access_count + (double)_page_in_faults))* 100);
    cout << "Page Fault Rate: " << pageFaultRate << " in percentage.." << endl;
}
void MMU::TLBFaultRATE(){
    cout << endl << endl;
    double hits = (1 - (_tlb_faults / (double)_tlb_access_count)) * 100;
    cout << "TLB Hit Rate: " << hits << " in percentage.." << endl;
}
Address MMU::getAddress(){
    return _address;
}