#include "monty.h"
/**
 * monty_op - executes monty instructions
 * @stack: stack
 * @arr_command:list of instructions
 * @line_number: line number
 * Return: 0 Sucess 1 instruction not valid
 */
int monty_op(stack_t **stack)
{
	int j, compare;
	instruction_t operations[] = {
		{"pall", pall_data},
		{"pint", pint_data},
		{"pop", pop_data},
		{"nop", nop_data},
		{"add", add},
		{"push", get_push},
		{"swap", swap},
		{NULL, NULL},
	};

	for (j = 0; (operations + j)->opcode != NULL; j++)
	{
		compare = strcmp((operations + j)->opcode, *details.arr_command);
			if (compare == 0)
			{
				(operations + j)->f(stack, details.line_number);
				return (0);
			}

	}
	fprintf(stderr, "L%d: unknown instruction %s\n", details.line_number, details.arr_command[0]);
	return (1);
}
