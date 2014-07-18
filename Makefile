CC=gcc

five: five.c
	$(CC) -fPIC -c five.c
	$(CC) -shared -o libfive.so five.o

test_five: test_five.c
	$(CC) -o test_five -L. -lfive test_five.c

clean:
	rm five test_five *.o *.so
