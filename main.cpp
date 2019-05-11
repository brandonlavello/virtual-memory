//# virtual-memory
//main.cpp

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "MMU.hpp"
#include "VMM.hpp"

using namespace std;

int main () {
    cout << "Begin" << std::endl;
    
    //array of 1000 addresses
    uint32_t addresses[1000];
    VMM vmm;

    //iterate over addresses, read then in from standard input
    for(int i = 0; i < 1000 ; i++) {
        cin >> addresses[i];
        vmm.readInput(addresses[i]);
    }

    return 0;
}
