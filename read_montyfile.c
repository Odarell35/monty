#include "monty.h"
/**
 * read_montyfile- reads monty file
 * @file: file from argument
 * Return: 0 Success
 */
int read_montyfile(char *file)
{
	ssize_t nreads;
	size_t buf_size;
	char *buf, *token, *arr_command;
	stack_t *stack = NULL;
	int i, fd, line_number;
	
	line_number = 0;
	arr_command = buf = NULL;
	buf_size = 0;

	fd = open(file, O_RDONLY);
		if (fd < 0)
		{
			/*handle_error*/
			exit(EXIT_FAILURE);
		}
	n_read = getline(&buf, &buf_size, fd);
	while (n_read > 0)
	{
		if (buf == '\n')
			continue;
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
			monty_operation(&stack, arr_command, line_number);
	}
	free_list(stack);
return (0);
}
