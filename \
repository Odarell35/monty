#include "monty.h"
/**
 * mul - multiplies the second top element of stack
 * @stack: pointer to the top of the stack
 * @line_number: current line Number
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: cant mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	(*stack)->next->n *= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(tmp);
}
