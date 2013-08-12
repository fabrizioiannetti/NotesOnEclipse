#
# note: the realmakefile is in the parent directory
# the CDT project setup compiles using that one

CFLAGS = -c -DTHIS_IS_DEFINED -DTEST_NESTED -I include
CC=my-super-g++

all: testnested

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.o

testnested.o : testnested.cpp
	$(CC) $(CFLAGS) testnested.cpp -o testnested.o

testnested : main.o testnested.o
	$(CC) main.o testnested.o -o testnested

clean:
	rm testnested testnested.o main.o 