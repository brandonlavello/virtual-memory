//# virtual-memory
#include "Address.h"

Address::Address () {
        _address = 0;
        _displacement = 0;
        _page = 0;
}

//SETTERS
void Address::setAddress(uint32_t addr) { _address = addr; }
void Address::setDisplacement(uint32_t disp) { _displacement = disp; }
void Address::setPage(uint32_t page) { _page = page; }

//GETTERS
uint32_t Address::getAddress() { return _address; }
uint32_t Address::getDisplacement() { return _displacement; }
uint32_t Address::getPage() { return _page; }