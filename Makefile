CC=gcc

five: five.c
	$(CC) -o five five.c

clean:
	rm five
