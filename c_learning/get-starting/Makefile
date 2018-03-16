CFLAGS=-Wall -g

objects = formatted_printing ex4 structure_of_a_program \
	  types_of_variables more_variables_and_some_math \
	  sizes_and_arrays arrays_and_strings \
	  arrays_of_strings_looping while_loop_and_boolean_expressions \
	  if_elseif_else switch_statement

all:
	cc -o formatted_printing formatted_printing.c
	cc -o ex4 ex4.c
	cc -o structure_of_a_program structure_of_a_program.c
	cc -o types_of_variables types_of_variables.c
	cc -o more_variables_and_some_math more_variables_and_some_math.c
	cc -o sizes_and_arrays sizes_and_arrays.c
	cc -o arrays_and_strings arrays_and_strings.c
	cc -o arrays_of_strings_looping arrays_of_strings_looping.c
	cc -o while_loop_and_boolean_expressions while_loop_and_boolean_expressions.c
	cc -o if_elseif_else if_elseif_else.c
	cc -o switch_statement switch_statement.c

clean:
	rm -f $(objects)
