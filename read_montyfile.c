#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
details_t details;
/**
 * read_montyfile- reads monty file
 * @file: file from argument
 * Return: 0 Success
 */
int read_montyfile(char *file)
{
	ssize_t n_read;
	size_t buf_size;
	char *token;
	stack_t *stack = NULL;
	int i;
	
	details.line_number = 0;
	details.arr_command = malloc(sizeof(char *) * 20);
	details.buf = NULL;
	buf_size = 0;

	details.fd = fopen(file, "r");
		if (details.fd == NULL)
			error_two(file);
	while ((n_read = getline(&details.buf, &buf_size, details.fd)) != -1)
	{
		if (*details.buf != '\n')
		{
			details.line_number++;
			token = strtok(details.buf, " \n\t");
			if (token  == NULL)
			{
				free(details.buf);
				continue;
			}
			for (i = 0; token != NULL; i++)
			{
				details.arr_command[i] = token;
				token = strtok(NULL, " \n\t");
			}
			details.arr_command[i] = NULL;
			if (**details.arr_command == '#')
				return (-1);
			monty_op(&stack);
		}
	}
	free_details();
	free_stack(stack);
	fclose(details.fd);
return (0);
}
