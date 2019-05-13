//# virtual-memory
//main.cpp

#include <iostream>
#include <iomanip>
#include "MMU.hpp"
//#include "TLB.hpp"
#include "PCB.hpp"
#include "RAM.hpp"

using namespace std;

//DATA

//array of 1000 addresses
int addresses[1000];

MMU *mmu;
PCB pcb;
RAM ram;

//page number
int pageNumber;
int physicalAddress;

int main () {
    cout << "\n*** BEGIN PROGRAM ***\n\n" << std::endl;
    
    mmu = new MMU();
    
    //iterate over addresses
    for(int i = 0; i < 1000 ; i++) {
        //read address into mmu
        cin >> addresses[i];
        mmu->readAddress(addresses[i]);

        //print out Logical Address
        cout << "Logical Address: " << setfill('0') << setw(sizeof(int)) << uppercase << hex << addresses[i];
        
        //Get Page - Update page_access_count? not sure.
        pageNumber = mmu->getAddress().getPage();
        
    //ACCESS TLB
        mmu->incrementTLBCount();  //increment _tlb_access_count

        //if (tlb->checkTLB(pageNumber)) { //check TLB for hit with pageNum
        //if hit in TLB
            //char x = ram.read();
            //Print out data from the frame number
            //mmu -> Ram -> read in data - print out
            //update TLB

        //s} else {
        //else not hit
            //increment tlb fault
            mmu->incrementTLBFault();

            //check pcb valid-invalid bit using Page Number
            if(pcb.pageTable[pageNumber].valid) 

            //check page fault
            
            //if page fault handle page fault


            cout << "ELSE" << endl;
        //}

        mmu->incrementPageCount();    //increment _page_access_count

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
 