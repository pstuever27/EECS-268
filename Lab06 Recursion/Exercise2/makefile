Exercise2: main.o Outbreak.o 
	g++ -std=c++11 -g -Wall main.o Outbreak.o -o Exercise2
main.o: main.cpp Outbreak.h
	g++ -std=c++11 -g -Wall -c main.cpp
Outbreak.o: Outbreak.h Outbreak.cpp
	g++ -std=c++11 -g -Wall -c Outbreak.cpp
clean:
	rm *.o Exercise2