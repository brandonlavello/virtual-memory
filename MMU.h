//# virtual-memory
//MMU.h

#ifndef MMU_H
#define MMU_H


class MemoryManagementUnit{
    private:
        //TLB tlb;

        //DATA
        int page_access_count;
        int page_in_faults;
        int tlb_access_count;
        int tlb_faults;
                                                     
    public:
        MemoryManagementUnit();

        void readAddress(int);
        void pageCount();
        void pageFault();
        void TLBCount();
        void TLBFault();
        void pageFaultRATE();
        void TLBFAULTRATE();


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
