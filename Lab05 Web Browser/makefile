Exercise1: main.o Executive.o BrowserHistory.o LinkedList.o Node.o
		g++ -std=c++11 -g -Wall main.o Executive.o -o Exercise1
main.o: main.cpp Executive.h
		g++ -std=c++11 -g -Wall -c main.cpp
Executive.o: Executive.h Executive.cpp BrowserHistoryInterface.h BrowserHistory.h BrowserHistory.cpp
		g++ -std=c++11 -g -Wall -c Executive.cpp
BrowserHistory.o: BrowserHistoryInterface.h BrowserHistory.h BrowserHistory.cpp ListInterface.h LinkedList.h LinkedList.cpp Node.h Node.cpp	
		g++ -std=c++11 -g -Wall -c BrowserHistory.cpp
LinkedList.o: ListInterface.h LinkedList.h LinkedList.cpp Node.h Node.cpp
		g++ -std=c++11 -g -Wall -c LinkedList.cpp
Node.o: Node.h Node.cpp	
		g++ -std=c++11 -g -Wall -c Node.cpp
clean:
		rm *.o Exercise1