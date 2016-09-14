CC = gcc-5
CFLAGS = -Wall -Wextra -pedantic -std=c11
PROGRAMS = pi pm pa
LIBS = myprint.c

.PHONY: clean all

pi: pointer_intro.c $(LIBS)
	$(CC) $(CFLAGS) -o $@ $< 

pm: pointer_mem.c $(LIBS)
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

pa: pointer_arr.c $(LIBS)
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

all: 
	make $(PROGRAMS)

clean: 
	rm -f $(PROGRAMS)