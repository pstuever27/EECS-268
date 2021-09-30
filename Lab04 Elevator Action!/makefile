Exercise1: main.o Executive.o Node.o Stack.o Queue.o
		g++ -std=c++11 -g -Wall main.o Executive.o Node.o Stack.o Queue.o -o Exercise1
main.o: main.cpp Executive.h
		g++ -std=c++11 -g -Wall -c main.cpp
Executive.o: Executive.h Stack.h Queue.h
		g++ -std=c++11 -g -Wall -c Executive.cpp
Node.o: Node.h
		g++ -std=c++11 -g -Wall -c Node.cpp
Stack.o: Stack.h Node.h StackInterface.h
		g++ -std=c++11 -g -Wall -c Stack.cpp
Queue.o: Queue.h Node.h QueueInterface.h
		g++ -std=c++11 -g -Wall -c Queue.cpp
clean:
		rm *.o Exercise1
