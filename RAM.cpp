//# virtual-memory

#include "RAM.hpp"

void RAM::store(int frameNum, char* frameData){
    for(int i=0; i< FRAME_SIZE; i++){
        physicalMem[frameNum][i] = frameData[i];
    }
}
int RAM::getRunningTime(int frameNum){
    return frame[frameNum].dirtyTime;
}