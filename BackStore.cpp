//# virtual-memory
#include "BackStore.hpp"

BS::BS(){
    binaryFile.open("BACKING_STORE.bin", ios::binary | ios::in);
    if(!binaryFile.is_open){
        cout << "Error: Could not open backing store.";
        cout << "Make sure BACKING_STORE.bin is in the working directoy" << endl;
        exit(1);
    }
}

BS::~BS(){
    // this will make sure to close the file(BACKING_STORE.bin)
    binaryFile.close();
    delete []buffer;
}

char* BS::read(uint32_t pageNumber){
// function from iostream that allows to file handle position 
// of the next char to be extracted from the input stream from
// a given file
    binaryFile.seekg(pageNumber* FRAME_SIZE);
    // pointer to an array where teh extracted char are stored
    binaryFile.read(buffer, FRAME_SIZE);
    return buffer;
}