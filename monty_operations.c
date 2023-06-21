#include "monty.h"
/**
 * monty_op - executes monty instructions
 * @stack: stack
 * @arr_command:list of instructions
 * @line_number: line number
 * Return: 0 Sucess 1 instruction not valid
 */
int monty_op(stack_t **stack, char **arr_command, unsigned int line_number)
{
	int j, compare;
	instruction_t operations[] = {
		{"pall", pall_data},
		{"pint", pint_data},
		{"pop", pop_data},
		{"nop", nop_data},
		{NULL, NULL},
	};

	for (j = 0; (operations + j)->opcode != NULL; j++)
	{
		compare = strcmp((operations + j)->opcode, arr_command[0]);
			if (compare == 0)
			{
				(operations + j)->f(stack, line_number);
				return (0);
			}

	}
	/*error_three(line_number, arr_command[0]);*/
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, arr_command[0]);
	return (1);
}
