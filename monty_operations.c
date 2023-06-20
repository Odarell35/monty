#include "monty.h"
/**
 * monty_operations - executes monty instructions
 * @stack: stack
 * @arr_command:list of instructions
 * @line_number: line number
 * Return: 0 Sucess 1 instruction not valid
 */
int monty_operations(stack_t **stack, char **arr_command, unsigned int line_number)
{
	int j, compare;
	instructions_t operations[] = {
		{"push", push_f},
		{"pall", pall_data},
		{NULL, NULL},
	};

	for (j = 0; (operation + j)->opcode != NULL; j++)
	{
		compare = strcmp((operations + j)->opcode, arr_command[0]);
			if (compare == 0)
			{
				(operation + j)->f(stack, line_number);
				return (0);
			}

	}
	error_three(line_number, arr_command[0]);
	return (1);
}
