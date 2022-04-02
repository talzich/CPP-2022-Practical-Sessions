CXX=clang++
CXX_VERSION=-std=c++2a

main: person.o student.o main.o
	$(CXX) $(CXX_VERSION) main.o person.o student.o -o main.out

main.o: main.cpp person.cpp
	$(CXX) $(CXX_VERSION) -c main.cpp -o main.o

person.o: person.hpp person.cpp
	$(CXX) $(CXX_VERSION) -c person.cpp -o person.o

student.o: student.hpp student.cpp person.hpp
	$(CXX) $(CXX_VERSION) -c student.cpp -o student.o

clean:
	rm -rf *.out *.o