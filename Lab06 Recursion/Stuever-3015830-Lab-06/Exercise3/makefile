Exercise3: main.o Fib.o
	g++ -std=c++11 -g -Wall main.o Fib.o -o Exercise3
main.o: main.cpp Fib.h
	g++ -std=c++11 -g -Wall -c main.cpp
Fib.o: Fib.h Fib.cpp
	g++ -std=c++11 -g -Wall -c Fib.cpp
clean:
	rm *.o Exercise3