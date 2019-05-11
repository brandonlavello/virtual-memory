//# virtual-memory
//main.cpp

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "MMU.hpp"

using namespace std;

//DATA

//array of 1000 addresses
int addresses[1000];
MMU mmu;

//page number
uint32_t pageNumber;

int main () {
    cout << "Begin" << std::endl;

    //iterate over addresses
    for(int i = 0; i < 1000 ; i++) {
        //read address into mmu
        cin >> addresses[i];
        mmu.readAddress(addresses[i]);

        //Get Page - Update page_access_count? not sure.
        mmu.getAddress().getPage();
        
    //ACCESS TLB
        mmu.incrementTLBCount(); //increment _tlb_access_count
        
        //check TLB for hit with pageNum
        //if hit in TLB
            //Print out data from the frame number 
            //mmu -> Ram -> read in data - print out
            //update TLB

        //else not hit 
            //increment tlb fault
            //check pcb valid-invalid bit using Page Number
            //check page fault
            //if page fault handle page fault

        //increment _page_access_count
        //mmu.incrementPageCount(); <- correct, just uncomment when ready

        //Print out data from the frame number
        //mmu -> Ram -> read in data - print out
        //update TLB
    } //end for loop

    //print TLB_FAULT RATE
    //print PAGE_ACCESS_FAULT RATE

    return 0;
}
 