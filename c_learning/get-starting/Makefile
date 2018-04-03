CFLAGS=-Wall -g

# all programs.
OBJECTS= formatted_printing structure_of_a_program \
	  types_of_variables more_variables_and_some_math \
	  sizes_and_arrays arrays_and_strings \
	  arrays_of_strings_looping while_loop_and_boolean_expressions \
	  if_elseif_else switch_statement
# clang compiler
CC=gcc

all:$(OBJECTS)

# program formatted_printing
formatted_printing:formatted_printing.c
	$(CC) $(CFLAGS) $< -o $@

# program structure_of_a_program
structure_of_a_program:structure_of_a_program.c
	$(CC) $(CFLAGS) $< -o $@

# program types_of_variables
types_of_variables:types_of_variables.c
	$(CC) $(CFLAGS) $< -o $@

# program more_variables_and_some_math
more_variables_and_some_math:more_variables_and_some_math.c
	$(CC) $(CFLAGS) $< -o $@

# program sizes_and_arrays.
sizes_and_arrays:sizes_and_arrays.c
	$(CC) $(CFLAGS) $< -o $@

# program arrays_and_strings.
arrays_and_strings:arrays_and_strings.c
	$(CC) $(CFLAGS) $< -o $@

# program arrays_of_strings_looping.
arrays_of_strings_looping:arrays_of_strings_looping.c
	$(CC) $(CFLAGS) $< -o $@

# program while_loop_and_boolean_expressions.
while_loop_and_boolean_expressions:while_loop_and_boolean_expressions.c
	$(CC) $(CFLAGS) $< -o $@

# program if_elseif_eles.
if_elseif_else:if_elseif_else.c
	$(CC) $(CFLAGS) $< -o $@

# program switch_statement.
switch_statement:switch_statement.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)
