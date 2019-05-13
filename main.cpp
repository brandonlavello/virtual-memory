//# virtual-memory
//main.cpp
#include <iostream>
#include <iomanip>
#include "MMU.hpp"
#include "PCB.hpp"
#include "RAM.hpp"
using namespace std;

//DATA
int addresses[1000]; //array of 1000 addresses
int pageNumber;
int physicalAddress;
MMU *mmu;
PCB pcb;
RAM ram;

int main () {
    cout << "\n*** BEGIN PROGRAM ***\n\n" << std::endl;
    
    //Create new MMU
    mmu = new MMU();
    
    //iterate over addresses
    for(int i = 0; i < 1000 ; i++) {
        //read address into mmu using I/O redirection
        cin >> addresses[i];
        mmu->readAddress(addresses[i]);

        //print out Logical Address in hex
        cout << "Logical Address: " << setfill('0') << setw(sizeof(int)) << uppercase << hex << addresses[i];
        
        //Get Page
        pageNumber = mmu->getAddress().getPage();

        //Update page_access_count
        mmu->incrementPageCount();
        
    //ACCESS TLB
        mmu->incrementTLBCount();  //increment _tlb_access_count

        //if (tlb->checkTLB(pageNumber)) { //check TLB for hit with pageNum
        //if hit in TLB
            //char x = ram.read();
            //Print out data from the frame number
            //mmu -> Ram -> read in data - print out
            //update TLB
        //} else {
        //else not hit
            //increment tlb fault
            mmu->incrementTLBFault();

            //check pcb valid-invalid bit using Page Number
            if(pcb.pageTable[pageNumber].valid) 

            //check page fault
            //if page fault handle page fault

            cout << "ELSE" << endl;
        //}

        mmu->incrementPageCount();  //increment _page_access_count

        //Print out data from the frame number
        //mmu -> Ram -> read in data - print out
        //update TLB

        //print out translated physical address
        //pageNumber * 256 + offset
        cout << "\tphysical";
        cout << "\t\tValue: " << "(Value of address)" << endl;
    } //end for loop

    //Program Completed - Print out Statistics
    cout << "\n\n*** PROGRAM COMPLETED ***\n\n" << "Program Statistics:\n\n";
    //print Page Fault Rate
    cout << "\tPage Fault Rate: " << mmu->getPageFaultRate() << endl;
    //print TLB Fault Rate - do not expect to have a high TLB hit rate
    cout << "\tTLB Fault Rate: " << mmu->getTLBFaultRate() << endl;
    cout << "\n\n*** ENDING PROGRAM ***\n\n";

    //destroy mmu
    delete mmu;

    return 0;
}
 

 //Read page table
//If nothing there, go to backing store
//load backing store into Page Table 
//page fault = page table has no data -> go into backing store -> store
