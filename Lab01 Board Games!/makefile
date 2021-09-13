Exercise1: main.o menu.o gamerecords.o
	g++ -std=c++11 -g -Wall main.o menu.o gamerecords.o -o Exercise1
main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp
gamerecords.o: gamerecords.h gamerecords.cpp
	g++ -std=c++11 -g -Wall -c gamerecords.cpp
menu.o: menu.h menu.cpp
	g++ -std=c++11 -g -Wall -c menu.cpp
clean:
	rm *.o Exercise1
