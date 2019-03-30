CXXFLAGS=-std=c++11

output: main.o
	$(CXX) $(CXXFLAGS) main.o -o Area

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm *.o
