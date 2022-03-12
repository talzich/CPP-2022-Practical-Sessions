# https://www.youtube.com/watch?v=GExnnTaBELk&t=603s

CXX=clang++
CFLAGS=-std=c++2a

all: prog
	./prog

prog: main.o Rectangle.o
	$(CXX) $(CFLAGS) main.o Rectangle.o -o prog

main.o: main.cpp Rectangle.hpp
	$(CXX) $(CFLAGS) -c main.cpp -o main.o

Rectangle.o: Rectangle.cpp Rectangle.hpp
	$(CXX) $(CFLAGS) -c Rectangle.cpp -o Rectangle.o

clean:
	rm -rf *.o prog