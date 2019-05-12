//# virtual-memory
//MMU.hpp
#include "Address.hpp"

#ifndef MMU_HPP
#define MMU_HPP

class MMU{
    private:
        //TLB tlb;
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

        //GETTERS
        // void getPageCount();
        // void getPageFault();
        // void getTLBCount();
        // void getTLBFault();
        
        double getPageFaultRate();
        double getTLBFaultRate();

        //return the value of private _address
        Address getAddress();


        /*
        void clearTLB();
        MemoryMangementUnit& instance();
        MemoryMangementUnit() // need to ffix this
        MemoryMangementUnit&(something here) operaotr=();
        pageAccesses();
        pageFaults()
        void read<T>();
        tlbAccesses();
        tlbFaults();

        struct PageFault{
            PageFault();
            Word pageNumber_;
        }
*/
    
};


#endif
