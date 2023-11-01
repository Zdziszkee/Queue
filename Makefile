CC = g++
CFLAGS = -Wall -Wextra -O3 -pedantic -std=c++17

all: Radix.x Generator.x Queue.x

Radix.x: Radix.cpp
	$(CC) $(CFLAGS) -o Radix.x Radix.cpp

Generator.x: Generator.cpp
	$(CC) $(CFLAGS) -o Generator.x Generator.cpp

Queue.x: Queue.cpp
	$(CC) $(CFLAGS) -o Queue.x Queue.cpp

clean:
	rm -f *.x