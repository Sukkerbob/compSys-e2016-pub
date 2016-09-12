CC = gcc-5
CFLAGS = -Wall -Wextra -pedantic -std=c11 
PROGRAMS = limits giveme fib
LIBS =  myio.c myprint.c

.PHONY: clean all

limits: limits.c
	$(CC) $(CFLAGS) -o limits -c limits.c

giveme: give_me_the_string.c $(LIBS)
	$(CC) $(CFLAGS) -o giveme give_me_the_string.c $(LIBS)

fib: fib.c
	$(CC) $(CFLAGS) -O2 -o fib fib.c

qsort: qsort.c $(LIBS)
	$(CC) $(CFLAGS) -o qsort qsort.c $(LIBS)

all: 
	make $(PROGRAMS)

clean: 
	rm -f $(PROGRAMS)