GXX49_VERSION := $(shell g++4.9 -- version 2>/dev/null)
ifdef GXX49_VERSION
	CXX_COMMAND := g++-4.9
else
	CXX_COMMAND := g++
endif
CXX = ${CXX_COMMAND} -g3 -O0 -std=c++17 -pedantic -Wall -Wold-style-cast -Wextra -Woverloaded-virtual -I./

run_test: VMManager
	./VMManager <addresses.txt 2>&1

VMManager: main.o mmu.o
	${CXX} main.o mmu.o -oVMManager
main.o: main.cpp MMU.hpp
	${CXX} main.cpp
mmu.o: MMU.cpp MMU.hpp
	${CXX} MMU.cpp

clean:
	rm -rf main.o mmu.o VMManager
