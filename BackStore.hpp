//# virtual-memory
#include <iostream>
#include <fstream>
#include "RAM.hpp"
using namespace std;
#ifndef BACKSTORE_HPP
#define BACKSTORE_HPP

//private:
//  std::basic_ifstream<Fram::value_type>   media_{"BACKING_STORE.bin", std::ifstream::binary};
class BS{
    private:
        ifstream binaryFile;
        char buffer[FRAME_SIZE] = {0};

    public:
        BS(); // default construc
        char* reading(int);
      //  ~BS(); 
};

#endif