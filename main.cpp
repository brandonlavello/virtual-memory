//# virtual-memory

// **********************
// 
// **********************

//main.cpp

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "MMU.h"

using namespace std;

int main () {
    cout << "Begin" << std::endl;
    
    //array of 1000 addresses
    int addresses[1000];

    //iterate over addresses, read then in from standard input
    for(int i = 0; i < 1000 ; i++) {
        cin >> addresses[i];

        //create new MMU
        //MemoryManagementUnit mmu;
        //mmu.readAddress(addresses[i]);

        //std::cout << addresses[i] << std::endl;
        //cout << hex << setw(4) << setfill('0') << uppercase << addresses[i] << endl;
    }

    return 0;
}
