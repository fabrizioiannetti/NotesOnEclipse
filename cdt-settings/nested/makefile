CFLAGS = -c -DTHIS_IS_DEFINED -DTEST_NESTED -I test-nested/include -I test-nested2/include -I .
CC=my-super-g++

all: test-nested/testnested test-nested2/testnested2

test-nested/main.o : test-nested/main.cpp
	$(CC) $(CFLAGS) test-nested/main.cpp -o test-nested/main.o

test-nested/testnested.o : test-nested/testnested.cpp
	$(CC) $(CFLAGS) test-nested/testnested.cpp -o test-nested/testnested.o

test-nested/testnested : test-nested/main.o test-nested/testnested.o
	$(CC) test-nested/main.o test-nested/testnested.o -o test-nested/testnested

#####

test-nested2/main.o : test-nested2/main.cpp
	$(CC) $(CFLAGS) test-nested2/main.cpp -o test-nested2/main.o

test-nested2/testnested2.o : test-nested2/testnested2.cpp
	$(CC) $(CFLAGS) test-nested2/testnested2.cpp -o test-nested2/testnested2.o

test-nested2/testnested2 : test-nested2/main.o test-nested2/testnested2.o
	$(CC) test-nested2/main.o test-nested2/testnested2.o -o test-nested2/testnested2

#####

clean:
	-rm test-nested/testnested test-nested/testnested.o test-nested/main.o
	-rm test-nested2/testnested2 test-nested2/testnested2.o test-nested2/main.o
