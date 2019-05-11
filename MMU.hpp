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
        
        void pageCount();
        void pageFault();
        void TLBCount();
        void TLBFault();
        void pageFaultRATE();
        void TLBFaultRATE();


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
