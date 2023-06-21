#include "monty.h"
/**
 * pint_data - prints the value at the top of the stack
 * @stack: Pointer To The Head
 * @line_number: Line Number
 */
void pint_data(stack_t **stack, unsigned line_number)
{
	line_number = 1;

	if(*stack == NULL)
		error_five(line_number);
	printf("%d\n", (*stack)->n);
}
