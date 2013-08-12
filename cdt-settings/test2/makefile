CC=g++ -c -DTHIS_IS_DEFINED -DTEST2 -I include2

all: test2

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.o

test2.o : test2.cpp
	$(CC) $(CFLAGS) test2.cpp test2.o

test2 : main.o test2.o
	g++ main.o test2.o -o test2

clean:
	-rm main.o test2.o test2