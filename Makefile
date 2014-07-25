CC=gcc
CFLAGS=-pedantic -Wall

libfive: five.c
	$(CC) $(CFLAGS) -fPIC -c five.c
	$(CC) $(CFLAGS) -shared -o libfive.so five.o

test_five: libfive tests/test_five.c
	$(CC) $(CFLAGS) -o test_five -L. -lfive tests/test_five.c

clean:
	rm test_five *.o *.so
