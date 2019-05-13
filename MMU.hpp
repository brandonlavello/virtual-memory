//# virtual-memory
//MMU.hpp
/*
Description:
    This class holds the counts offf page access, tlb access count, page fault, and tlb fault.
    It also calculates the hit rate and page fault rate
*/
#include "Address.hpp"
#include "TLB.hpp"

#ifndef MMU_HPP
#define MMU_HPP

class MMU{
    private:
        TLB *tlb;
        Address _address;

        //DATA
        int _page_access_count;
        int _page_in_faults;
        int _tlb_access_count;
        int _tlb_faults;
                                                     
    public:
        MMU();
        void readAddress(int);  //read address into address obj

        //SETTERS
            //IncrementerS
        void incrementPageCount();
        void incrementPageFault();
        void incrementTLBCount();
        void incrementTLBFault();
        uint32_t getFrame();

        //GETTERS
         void getPageCount();
         void getPageFault();
         void getTLBCount();
         void getTLBFault();
        
        double getPageFaultRate();
        double getTLBFaultRate();

        //return the value of private _address
        Address getAddress();
    
};

#endif
