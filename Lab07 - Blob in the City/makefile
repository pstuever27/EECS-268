Exercise1: main.o city.o
	g++ -std=c++11 -g -Wall main.o city.o -o Exercise1
main.o: City.h
	g++ -std=c++11 -g -Wall -c main.cpp
city.o: City.h
	g++ -std=c++11 -g -Wall -c city.cpp
clean:
	rm *o Exercise1
