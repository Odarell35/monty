#include "monty.h"
/**
 * pall_data -  prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: stack head
 * @line_number: no used
 * Return: no return
*/
void pall_data(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) line_number;

	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
