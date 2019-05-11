//# virtual-memory
#include "BackStore.hpp"

BS::BS(){
    binaryFile.open("BACKING_STORE.bin", ios::binary | ios::in);
    if(!binaryFile.is_open){
        cout << "Something went wrong. where is it?" <<endl;
        system("pause");
    }
}
char* BS::reading(int pageNum){
// function from iostream that allows to file handle
// positino of the next char to be extracted from the input stream from
// a given file
    binaryFile.seekg(pageNum* FRAME_SIZE);
    // pointer to an array where teh extracted char are stored
    binaryFile.read(buffer, FRAME_SIZE);
    return buffer;
}