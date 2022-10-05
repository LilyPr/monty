#include "monty.h"

/**
 * check_file - checks file, line by line
 * @file: the name of the file
 * @stack: double pointer to top of the stack
 *
 * Return: return an error code or success
 */
void check_file(char *file, stack_t **stack)
{
	size_t depth;
	ssize_t checkline;
	unsigned int digit = 0;
	char *line = NULL;
	FILE *fd;
	char *order;

	fd = fopen(file, "r");
	if (!fd)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((checkline = getline(&line, &depth, fd)) != -1)
	{
		order = strtok(line, DELIMS);
		digit++;

		if (order)
			parse(stack, order, digit);
	}

	if (line)
		free(line);

	fclose(fd);
}
