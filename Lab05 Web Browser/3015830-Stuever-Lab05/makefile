Exercise1: main.o BrowserHistory.o Executive.o
	g++ -g -std=c++11 -Wall main.o BrowserHistory.o Executive.o -o Exercise1

main.o: main.cpp
	g++ -g -std=c++11 -Wall -c main.cpp

BrowserHistory.o: BrowserHistoryInterface.h BrowserHistory.h BrowserHistory.cpp Node.h Node.cpp ListInterface.h LinkedList.h LinkedList.cpp
	g++ -g -std=c++11 -Wall -c BrowserHistory.cpp

Executive.o: Executive.cpp Executive.h
	g++ -g -std=c++11 -Wall -c Executive.cpp

clean: 
	rm *.o Exercise1
