#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_montyfile- reads monty file
 * @file: file from argument
 * Return: 0 Success
 */
int read_montyfile(char *file)
{
	ssize_t n_read;
	size_t buf_size;
	char *buf, *token, **arr_command;
	stack_t *stack = NULL;
	int i;
	FILE *fd;
	unsigned int line_number;

	line_number = 0;
	arr_command = malloc(sizeof(char *) * 20);
	buf = NULL;
	buf_size = 0;

	fd = fopen(file, "r");
		if (fd == NULL)
			error_two(file);
	while ((n_read = getline(&buf, &buf_size, fd)) != -1)
	{
		/*if (buf == "\n")*/
			/*continue;*/
		line_number++;
		/*free something*/
		token = strtok(buf, "\n\t\a");
			i = 0;
			while (token)
			{
				arr_command[i] = token;
				i++;
				token = strtok(NULL, "\n\t\a");
			}
			arr_command[i] = NULL;
			monty_op(&stack, arr_command, line_number);
	}
/*	free_list(stack);*/
	free(buf);
	fclose(fd);
return (0);
}
