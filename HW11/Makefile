CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: main.o temp_api.o
	$(CC) $(CFLAGS) -o main main.o temp_api.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

temp_api.o: temp_api.c
	$(CC) $(CFLAGS) -c temp_api.c

clean:
	rm -f *.o main