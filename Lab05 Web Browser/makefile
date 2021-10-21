Exercise1: main.o Executive.o BrowserHistory.o List.o Node.o
		g++ -std=c++11 -g -Wall main.o Executive.o List.o Node.o -o Exercise1
main.o: main.cpp Executive.h
		g++ -std=c++11 -g -Wall -c main.cpp
Executive.o: Executive.h BrowserHistory.h List.h
		g++ -std=c++11 -g -Wall -c Executive.cpp
BrowserHistory.o: BrowserHistoryInterface.h BrowserHistory.h ListInterface.h
		g++ -std=c++11 -g -Wall -c BrowserHistory.cpp
List.o: ListInterface.h List.h Node.h
		g++ -std=c++11 -g -Wall -c List.cpp
Node.o: Node.h
		g++ -std=c++11 -g -Wall -c Node.cpp
clean:
		rm *.o Exercise1
