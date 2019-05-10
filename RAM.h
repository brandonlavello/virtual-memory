//# virtual-memory
//TLB.h

#ifndef RAM_H
#define RAM_H

//CODE HERE
class Ram {
    private:
        Ram();          
        
    public:
        //Ram& instance();
        //Ram&(soemthing in here) operator=();
        //Ram(+1 overloaded) // some data type and value       
        //void read<T>();


        struct Status{
            bool accessed;
            bool dirty;
        };

};

#endif
