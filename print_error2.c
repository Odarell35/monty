#include "monty.h"
/**
 *error_six- If the stack is empty
 *@line_number: line number
 *Return: void
 */
void error_six(void)
{

	printf("L%d: can't pop an empty stack\n", details.line_number);
	free_details();
	exit(EXIT_FAILURE);
}
