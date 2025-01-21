# Virtual Memory Management Simulation

This project is a C++ simulation of a virtual memory management system, developed as part of an academic assignment at California State University, Fullerton. The simulation models key components of virtual memory, including address translation, page replacement, and memory allocation.

## Contributors

- **Brandon Lavello**: brandonlavello@csu.fullerton.edu
- **Jonathan Torres**: jon7torres@csu.fullerton.edu
- **Hyun Woo Kim**: hyunwoo777@csu.fullerton.edu

## Project Structure

The project comprises several C++ source and header files, each representing different components of the virtual memory system:

- `Address.cpp` / `Address.hpp`: Handles logical and physical address representations and translations.
- `BackStore.cpp` / `BackStore.hpp`: Simulates the backing store, typically representing disk storage for pages not currently in physical memory.
- `MMU.cpp` / `MMU.hpp`: Implements the Memory Management Unit, responsible for address translation and page table management.
- `PCB.cpp` / `PCB.hpp`: Defines the Process Control Block, maintaining process-specific information such as page tables.
- `RAM.cpp` / `RAM.hpp`: Simulates physical memory, managing frame allocation and deallocation.
- `TLB.cpp` / `TLB.hpp`: Implements the Translation Lookaside Buffer for caching recent address translations.
- `main.cpp`: Contains the `main` function to execute the simulation.
- `makefile`: Build configuration for compiling the project.
- `addresses.txt`: Input file containing logical addresses to be translated during the simulation.
- `output.txt`: Sample output demonstrating the results of the simulation.

## Compilation and Execution

### Prerequisites

- **C++ Compiler**: Ensure that a C++ compiler (e.g., g++) is installed on your system.

### Compilation

To compile the project, navigate to the project directory and run:

```bash
make
```

This command will compile the source files and generate an executable named VMManager.

## Execution

After compilation, run the simulation using:
```
./VMManager
```
The program will read logical addresses from addresses.txt, perform address translation, and simulate memory access, producing output that details the steps taken and any page faults encountered.

## License

This project is licensed under the MIT License.
 
## Acknowledgments

This simulation was developed as part of coursework at California State University, Fullerton, to demonstrate the principles of virtual memory management in operating systems.
