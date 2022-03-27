CXX = clang++
CXX_STD = -std=c++2a

primitive: primitive.cpp
	$(CXX) $(CXX_STD) primitive.cpp -o primitive.out

structs: structs.cpp
	$(CXX) $(CXX_STD) structs.cpp -o structs.out && ./structs.out

classes: classes.cpp
	$(CXX) $(CXX_STD) classes.cpp -o classes.out 

clean:
	rm -rf *.o *.out