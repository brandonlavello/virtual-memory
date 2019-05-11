//# virtual-memory
#include <iostream>

#ifndef ADDRESS_HPP
#define ADDRESS_HPP
using namespace std;

struct Address {
    private:
        uint32_t _address;
        uint32_t _displacement;
        uint32_t _page;

    public:
        Address();
        void setAddress(uint32_t);
        void setDisplacement(uint32_t);
        void setPage(uint32_t);

        uint32_t getAddress();
        uint32_t getDisplacement();
        uint32_t getPage();
};
#endif
