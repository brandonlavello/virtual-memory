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
    cout << "\n*** BEGIN PROGRAM ***\n\n" << std::endl;

    //iterate over addresses
    for(int i = 0; i < 1000 ; i++) {
        //read address into mmu
        cin >> addresses[i];
        mmu.readAddress(addresses[i]);

        //print out Logical Address
        cout << "Logical Address: " << setfill('0') << setw(sizeof(int)) << uppercase << hex << addresses[i];

        //print out translated physical address (probably have to move this down)
        cout << "\t->" << "   (physical address)";



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

        //print out translated physical address (probably have to move this down)
        cout << "\t\tValue: " << "(Value of address)" << endl;

    } //end for loop
    


    //Program Completed - Print out Statistics
    cout << "\n\n*** PROGRAM COMPLETED ***\n\n" << "Program Statistics:\n\n";

    //print Page Fault Rate
    cout << "\tPage Fault Rate: " << mmu.getPageFaultRate() << endl;

    //print TLB Fault Rate - do not expect to have a high TLB hit rate
    cout << "\tPage Fault Rate: " << mmu.getTLBFaultRate() << endl;

    cout << "\n\n*** ENDING PROGRAM ***\n\n";
    return 0;
}
 