#include "monty.h"
/**
 * error_one - monty interpreter error
 */
void error_one(void)
{
	printf("USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * error_two - failed to open file
 * @file: filename
 */
void error_two(char *file)
{
	printf("Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}
/**
 * error_three - unknown instructions
 * @line_number: line number
 * @arr_command: commands
 */
void error_three(unsigned int line_number, char **arr_command)
{
	printf("L%d: unknown instruction %s\n", line_number, arr_command[0]);
	exit(EXIT_FAILURE);
}
/**
 * error_four - malloc failed
 */
void error_four(void)
{
	printf("Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
