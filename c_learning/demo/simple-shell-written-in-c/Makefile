OBJECTS = simple-shell-in-c
DISTOBJECTS = func-impl.o bultin_funcs.o
GCC = gcc
CFLAGS = -Wall -g -nostartfiles

all: $(OBJECTS)

# complie for the target main program simple-shell-in-c into binary code.
simple-shell-in-c: func-impl.o bultin_funcs.o simple-shell-in-c.h
	$(GCC) $(CFLAGS) $^ -o $@


func-impl.o:func-impl.c simple-shell-in-c.h
	$(GCC) $(CFLAGS) $< -o $@

bultin_funcs.o: bultin_funcs.h bultin_funcs-impl.c
	$(GCC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS)

distclean:
	rm -rf $(DISTOBJECTS)
