CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

all: main

main: main.o Professor.o Student.o
	$(CXX) $(CXXFLAGS) -o main main.o Professor.o Student.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Professor.o: Professor.cpp Professor.h Person.h
	$(CXX) $(CXXFLAGS) -c Professor.cpp

Student.o: Student.cpp Student.h Person.h
	$(CXX) $(CXXFLAGS) -c Student.cpp

clean:
	rm -f main *.o
