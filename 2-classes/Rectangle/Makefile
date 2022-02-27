CXX = clang++
CXXFLAGS = -std=c++2a

all: prog
	./prog

prog: Rectangle.o main.o
	$(CXX) $(CXXFLAGS) Rectangle.o main.o -o prog

Rectangle.o: Rectangle.cpp Rectangle.hpp
	$(CXX) $(CXXFLAGS) -c Rectangle.cpp -o Rectangle.o

main.o: Rectangle.hpp main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -rf *.o *.out prog