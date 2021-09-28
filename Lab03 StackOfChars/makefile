Exercise1: main.o executive.o Node.o StackOfChar.o StackTester.o Parser.o
		g++ -std=c++11 -g -Wall main.o executive.o Node.o StackOfChar.o StackTester.o Parser.o -o Exercise1
main.o: main.cpp executive.h
		g++ -std=c++11 -g -Wall -c main.cpp
executive.o: executive.h Node.o StackTester.h Parser.h
		g++ -std=c++11 -g -Wall -c executive.cpp
Node.o: Node.h 
		g++ -std=c++11 -g -Wall -c Node.cpp
StackOfChar.o: StackOfChar.h Node.h StackInterface.h
		g++ -std=c++11 -g -Wall -c StackOfChar.cpp
StackTester.o: StackTester.h Node.h StackOfChar.h
		g++ -std=c++11 -g -Wall -c StackTester.cpp
Parser.o: Parser.cpp Node.h StackOfChar.h
		g++ -std=c++11 -g -Wall -c Parser.cpp
clean:
		rm *.o Exercise1