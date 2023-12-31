#include "monty.h"

/**
 * get_push - function that pushes an element onto top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
 * @temp: Pointer to instruction
 *
 * Description: Implements the push opcode.
 * If the input is not a valid integer, it prints an error message and exits.
 * Otherwise, it creates a new node and pushes it onto the stack.
 */
void get_push(stack_t **stack, unsigned int line_number) 
{
	stack_t *new_node;	
	int value;
	(void) line_number;
	
	new_node = malloc(sizeof(stack_t));

	if (_isdigit(details.arr_command[1]) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_details();
		exit(EXIT_FAILURE);
	}


	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(new_node);
		exit(EXIT_FAILURE);
	}
	
	value = atoi(details.arr_command[1]);

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
/**
 *  _isdigit - Checks if a character is a digit or not
 *  @str: Character passed in
 *
 *  Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(char *str)
{
	int i = 0;

	if (str[i] == '-')
		i++;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}

	return (1);
}
