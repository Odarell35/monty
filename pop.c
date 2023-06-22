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
	(void)line_number;

	if (*stack == NULL)
		error_six();

	head = *stack;
	head = head->next;
	free(*stack);
	*stack = head;
	if(head != NULL)
		head->prev = NULL;
}
