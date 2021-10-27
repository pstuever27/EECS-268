Exercise1: main.o Checker.o
	g++ -std=c++11 -g -Wall main.o Checker.o -o Exercise1
main.o: main.cpp Checker.o
	g++ -std=c++11 -g -Wall -c main.cpp
Checker.o: Checker.h Checker.cpp
	g++ -std=c++11 -g -Wall -c Checker.cpp
clean:
	rm *.o Exercise1