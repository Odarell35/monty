#include "monty.h"
/**
 * pint_data - prints the value at the top of the stack
 * @stack: Pointer To The Head
 * @line_number: Line Number
 */
void pint_data(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (*stack == NULL)
		error_five();
	printf("%d\n", (*stack)->n);
}
