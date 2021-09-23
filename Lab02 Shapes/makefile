Exercise1: main.o executive.o ShapeContainer.o rectangle.o circle.o triangle.o
		g++ -std=c++11 -g -Wall main.o executive.o ShapeContainer.o rectangle.o circle.o triangle.o -o Exercise1
main.o: main.cpp executive.h
		g++ -std=c++11 -g -Wall -c main.cpp
executive.o: ShapeContainer.h executive.h executive.cpp
		g++ -std=c++11 -g -Wall -c executive.cpp
ShapeContainer.o: ShapeContainer.h ShapeContainer.cpp shape.h
		g++ -std=c++11 -g -Wall -c ShapeContainer.cpp
rectangle.o: shape.h rectangle.cpp rectangle.h
		g++ -std=c++11 -g -Wall -c rectangle.cpp
triangle.o: shape.h triangle.cpp triangle.h
		g++ -std=c++11 -g -Wall -c triangle.cpp
circle.o: circle.cpp circle.h shape.h
		g++ -std=c++11 -g -Wall -c circle.cpp
clean:
		rm *.o Exercise1
