//# virtual-memory
//TLB.h

#ifndef RAM_HPP
#define RAM_HPP
// constant  pre defined number
#define FRAME_SIZE 256
#define RAM_SIZE 256

//CODE HERE
class RAM{
    private:
        char physicalMem[RAM_SIZE][FRAME_SIZE];
        Dirty frame[RAM_SIZE];
    public:
        void store(int, char*); // constructor that takes itn and char param
        int getRunningTime(int); //
};

//
struct Dirty {
    int dirtyTime = 0; // used to implement algorithm
};

#endif