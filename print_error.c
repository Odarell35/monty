#include "monty.h"
/**
 * error_one - monty interpreter error
 */
void error_one(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * error_two - failed to open file
 * @file: filename
 */
void error_two(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}
/**
 * error_three - unknown instructions
 * Return: void
 * */
 void error_three(void)
 {
 	fprintf(stderr, "L%d: unknown instruction %s\n", details.line_number, details.arr_command[0]);
 	exit(EXIT_FAILURE);
 }
 

/**
 * error_four - malloc failed
 */
void error_four(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
/**
 * error_five- If the stack is empty
 * @line_number: line number
 */
void error_five(void)
{
	fprintf(stderr, "L%d: can't pint, stack empty", details.line_number);
	free_details();
	exit(EXIT_FAILURE);
}
