#include "monty.h"
/**
 *error_six- If the stack is empty
 *@line_number: line number
 *Return: void
 */
void error_six(unsigned int line_number)
{
	line_number = 1;

	printf("L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
