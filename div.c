#include "monty.h"
/**
 * div - divides the second top element of the stack
 * @stack: points to the stack
 * @line_number: the line number
 */
void div_data(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: cant div stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	(*stack)->next->n /= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(tmp);
}
