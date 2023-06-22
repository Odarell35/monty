#include "monty.h"

/**
 * get_sub - Subtracts the top element of the stack from the second top element
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number being executed
 */
void get_sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	pop_data(stack, line_number);
}
