#include "monty.h"

/**
 * close_file - close file stream
 * @level: status passed to exit
 * @arg: pointer to file stream
 *
 * Return: void
 */
void close_file(int level, void *arg)
{
	FILE *bk;

	(void)level;

	bk = (FILE *) arg;
	fclose(bk);
}
