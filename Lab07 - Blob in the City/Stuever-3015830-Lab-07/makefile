Exercise1: main.o City.o
	g++ -std=c++11 -g -Wall main.o City.o -o Exercise1
main.o: City.h
	g++ -std=c++11 -g -Wall -c main.cpp
City.o: City.h
	g++ -std=c++11 -g -Wall -c City.cpp
clean:
	rm *o Exercise1
