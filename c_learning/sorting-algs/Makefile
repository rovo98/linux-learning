CFLAGS=-Wall -g

# all programs.
OBJECTS=bubble_sort selection_sort insertion_sort shell_sort \
	merge_sort quick_sort heap_sort
# clang compiler
CC=gcc

all: $(OBJECTS)

# makefile settings for program bubble_sort.
bubble_sort: bubble_sort.c bubble_tools.o
	$(CC) $(CFLAGS) bubble_sort.c bubble_tools.o -o bubble_sort
bubble_tools.o: bubble_tools.c
	$(CC) $(CFLAGS) -c bubble_tools.c

# makefile settings for program selection_sort.
selection_sort: selection_sort.c selection_tools.o
	$(CC) $(CFLAGS) selection_sort.c selection_tools.o -o selection_sort
selection_tools.o: selection_tools.c
	$(CC) $(CFLAGS) -c selection_tools.c

# makefile settings for program  insertion_sort.
insertion_sort: insertion_sort.c insertion_tools.o
	$(CC) $(CFLAGS) insertion_sort.c insertion_tools.o -o insertion_sort
insertion_tools.o: insertion_tools.c
	$(CC) $(CFLAGS) -c insertion_tools.c

# makefile settings for program shell_sort.
shell_sort: shell_sort.c shell_tools.o
	$(CC) $(CFLAGS) shell_sort.c shell_tools.o -o shell_sort
shell_tools.o: shell_tools.c
	$(CC) $(CFLAGS) -c shell_tools.c

# makefile settings for program merge_sort.
merge_sort: merge_sort.c merge_tools.o
	$(CC) $(CFLAGS) merge_sort.c merge_tools.o -o merge_sort
merge_tools.o: merge_tools.c
	$(CC) $(CFLAGS) -c merge_tools.c

# makefile settings for program quick_sort.
quick_sort: quick_sort.c quick_tools.o
	$(CC) $(CFLAGS) quick_sort.c quick_tools.o -o quick_sort
quick_tools.o: quick_tools.c
	$(CC) $(CFLAGS) -c quick_tools.c

# makefile settings for program heap_sort.
heap_sort: heap_sort.c heap_tools.o
	$(CC) $(CFLAGS) heap_sort.c heap_tools.o -o heap_sort
heap_tools.o: heap_tools.c
	$(CC) $(CFLAGS) -c heap_tools.c

clean:
	rm -f $(OBJECTS) *.o
