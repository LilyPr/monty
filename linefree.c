include "monty.h"

/**
 * free_line - free line pointer returned by getline
 * @level: exit status
 * @arg: pointer to line
 *
 * Return: void
 */
void free_line(int level, void *arg)
{
	char **line = arg;

	(void)level;
	if (*line != NULL)
		free(*line);
}
