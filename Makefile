#Author: Stephen Stinson \
 Date: 11/2/16 \
 Desciption: simple makefile for my main

CC = g++
TARGET = main
CFLAGS = -c -Wall
all: $(TARGET)


main.o:main.cpp
	$(CC) main.cpp $(CFLAGS)

main:main.o
	$(CC) main.o -o $(TARGET)

clean:
	rm *.o *~
