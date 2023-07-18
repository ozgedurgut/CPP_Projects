CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wpedantic

OBJS = main.o LRUCache.o Node.o

all: cache

cache: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o cache

main.o: main.cpp LRUCache.h
	$(CXX) $(CXXFLAGS) -c main.cpp

LRUCache.o: LRUCache.cpp LRUCache.h cache.h Node.h
	$(CXX) $(CXXFLAGS) -c LRUCache.cpp

Node.o: Node.cpp Node.h
	$(CXX) $(CXXFLAGS) -c Node.cpp

clean:
	rm -f $(OBJS) cache
