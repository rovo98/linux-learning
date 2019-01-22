CFLAGS=-Wall -g

# all programs.
OBJECTS=bubble_sort selection_sort insertion_sort shell_sort \
	merge_sort quick_sort heap_sort
# clang compiler
CC=gcc

all: $(OBJECTS)

# compile target for program bubble_sort.
bubble_sort: bubble_sort.c bubble_tools.o
	$(CC) $(CFLAGS) $^ -o $@
bubble_tools.o: bubble_tools.c bubble.h
	$(CC) $(CFLAGS) -c $< -o $@

# compile target for program selection_sort.
selection_sort: selection_sort.c selection_tools.o
	$(CC) $(CFLAGS) $^ -o $@
selection_tools.o: selection_tools.c selection.h
	$(CC) $(CFLAGS) -c $< -o $@

# compile target for program  insertion_sort.
insertion_sort: insertion_sort.c insertion_tools.o
	$(CC) $(CFLAGS) $^ -o $@
insertion_tools.o: insertion_tools.c insertion.h
	$(CC) $(CFLAGS) -c $< -o $@

# compile target for program shell_sort.
shell_sort: shell_sort.c shell_tools.o
	$(CC) $(CFLAGS) $^ -o $@
shell_tools.o: shell_tools.c shell.h
	$(CC) $(CFLAGS) -c $< -o $@

# compile target for program merge_sort.
merge_sort: merge_sort.c merge_tools.o
	$(CC) $(CFLAGS) $^ -o $@
merge_tools.o: merge_tools.c merge.h
	$(CC) $(CFLAGS) -c $< -o $@

# compile target for program quick_sort.
quick_sort: quick_sort.c quick_tools.o
	$(CC) $(CFLAGS) $^ -o $@
quick_tools.o: quick_tools.c quick.h
	$(CC) $(CFLAGS) -c $< -o $@

# compile target for program heap_sort.
heap_sort: heap_sort.c heap_tools.o
	$(CC) $(CFLAGS) $^ -o $@
heap_tools.o: heap_tools.c heap.h
	$(CC) $(CFLAGS) -c $< -o $@

#clean up all the dists.
distclean:
	rm -rf *.o

#clean up all the Ojects and dists
clean:
	rm -f $(OBJECTS) *.o
