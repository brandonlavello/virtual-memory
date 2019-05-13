//# virtual-memory

#include "RAM.hpp"

RAM::RAM(){

}

void RAM::store(uint32_t frameNumber, char * frame)
{
    for(int i=0; i< FRAME_SIZE; i++){
        physicalMemory[frameNumber][i] = frame[i];
    }
} 

char RAM::read(uint32_t frameNumber, uint32_t displacement) {
    return physicalMemory[frameNumber][displacement];
}
// int RAM::getRunningTime(int frameNum){
//     return frame[frameNum].dirtyTime;
// }