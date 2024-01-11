#this is a makefile for performance tool project

$(CC)=gcc
all: clean final
final: main.o data.o SortStrategy.o
	$(CC) -std=c++11 main.o data.o SortStrategy.o -o SortTool -lstdc++
main.o: main.cpp
	$(CC) -std=c++11 -g -c main.cpp
data.o: data.cpp data.h
	$(CC) -std=c++11 -g -c data.cpp
sortstrategy.o: SortStrategy.cpp SortStrategy.h
	$(CC) -std=c++11 -g -c SortStrategy.cpp
clean:
	rm *.o SortTool
