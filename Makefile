CC=gcc
CFLAGS=-pedantic -Wall

SOURCES  := $(wildcard src/*.c)
INCLUDES := $(wildcard src/*.h)
OBJECTS  := $(SOURCES:src/%.c=obj/%.o)

lib/libfive.so: $(OBJECTS)
	$(CC) $(CFLAGS) -shared -o $@ $(OBJECTS)

$(OBJECTS): obj/%.o : src/%.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

test_five: lib/libfive.so tests/test_five.c
	$(CC) $(CFLAGS) -o test_five -Llib -lfive -Isrc tests/test_five.c

clean:
	rm -f test_five obj/*.o lib/libfive.so
