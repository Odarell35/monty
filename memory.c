#include "monty.h"
void free_details(void)
{
	free(details.buf);
	details.buf = NULL;
	free(details.arr_command);
	details.arr_command = NULL;
}
void free_stack(stack_t *stack)
{
	stack_t *n;

	while (stack != NULL)
	{
		n = stack;
		stack = stack->next;
		free(n);
	}
}
