CFLAGS = -c -DTHIS_IS_DEFINED -DTEST1 -I include
CC=my-super-g++

all: test1

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.o

test1.o : test1.cpp
	$(CC) $(CFLAGS) test1.cpp -o test1.o

test1 : main.o test1.o
	$(CC) main.o test1.o -o test1

clean:
	rm test1 test1.o main.o 