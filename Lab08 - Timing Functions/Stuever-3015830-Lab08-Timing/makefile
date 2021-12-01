Exercise1: main.o Executive.o
		g++ -std=c++11 -g -Wall main.o Executive.o -o Exercise1
main.o: main.cpp Executive.h
		g++ -std=c++11 -g -Wall -c main.cpp
Executive.o: Executive.h Node.h Node.cpp Stack.h Stack.cpp Queue.h Queue.cpp List.h List.cpp
		g++ -std=c++11 -g -Wall -c Executive.cpp
clean:
		rm *.o Exercise1
