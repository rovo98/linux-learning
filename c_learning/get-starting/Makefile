CFLAGS=-Wall -g

OBJECTS= formatted_printing structure_of_a_program \
	  types_of_variables more_variables_and_some_math \
	  sizes_and_arrays arrays_and_strings \
	  arrays_of_strings_looping while_loop_and_boolean_expressions \
	  if_elseif_else switch_statement

all:$(OBJECTS)

formatted_printing:formatted_printing.c
	$(CC) $(CFLAGS) formatted_printing.c -o formatted_printing
structure_of_a_program:structure_of_a_program.c
	$(CC) $(CFLAGS) structure_of_a_program.c -o structure_of_a_program
types_of_variables:types_of_variables.c
	$(CC) $(CFLAGS) types_of_variables.c -o types_of_variables
more_variables_and_some_math:more_variables_and_some_math.c
	$(CC) $(CFLAGS) more_variables_and_some_math.c -o more_variables_and_some_math
sizes_and_arrays:sizes_and_arrays.c
	$(CC) $(CFLAGS) sizes_and_arrays.c -o sizes_and_arrays
arrays_and_strings:arrays_and_strings.c
	$(CC) $(CFLAGS) arrays_and_strings.c -o arrays_and_strings
arrays_of_strings_looping:arrays_of_strings_looping.c
	$(CC) $(CFLAGS) arrays_of_strings_looping.c -o arrays_of_strings_looping
while_loop_and_boolean_expressions:while_loop_and_boolean_expressions.c
	$(CC) $(CFLAGS) while_loop_and_boolean_expressions.c -o while_loop_and_boolean_expressions
if_elseif_else:if_elseif_else.c
	$(CC) $(CFLAGS) if_elseif_else.c -o if_elseif_else
switch_statement:switch_statement.c
	$(CC) $(CFLAGS) switch_statement.c -o switch_statement

clean:
	rm -f $(OBJECTS)
