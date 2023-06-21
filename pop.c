#include "monty.h"
/**
 * pop_data - removes the top element of the stack.
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void pop_data(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;
	line_number = 1;
	if (*stack == NULL)
		error_six(line_number);
	
	head = head->next;
	free(*stack);
	*stack = head;
	head->prev = NULL;
}

