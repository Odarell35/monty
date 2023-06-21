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
		if (*details.buf == '\n')
			continue;
		details.line_number++;
		token = strtok(details.buf, "\n\t\a");
			i = 0;
			while (token)
			{
				details.arr_command[i] = token;
				i++;
				token = strtok(NULL, "\n\t\a");
			}
			details.arr_command[i] = NULL;
			monty_op(&stack);
	}
/*	free_list(stack);*/
	free(details.buf);
	fclose(details.fd);
return (0);
}
