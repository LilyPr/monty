#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * file_rd - reads file, line by line
 * @docu: the name of the file
 * @stack: double pointer to top of the stack
 *
 * Return: return an error code or success
 */
void file_rd(char *docu, stack_t **stack)
{
	int read_line;
	size_t len;
	unsigned int digit = 0;
	char *line = NULL;
	FILE *fl;
	char *core;

	fl = fopen(docu, "r");
	if (!fl)
	{
		printf("Error: Can't open file %s\n", docu);
		exit(EXIT_FAILURE);
	}

	while ((read_line = getline(&line, &len, fl)) != -1)
	{
		core = strtok(line, DELIMS);
		digit++;

		if (core)
			check_code(stack, core, digit);
	}

	if (line)
		free(line);

	fclose(fl);
}
