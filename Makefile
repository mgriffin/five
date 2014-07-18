CC=gcc

five: five.c
	$(CC) -fPIC -c five.c
	$(CC) -shared -o libfive.so five.o

clean:
	rm five *.o *.so
