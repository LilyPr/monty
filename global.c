#include "monty.h"

/**
 * free_global - globally frees memory, previously alocated in the program
 *
 * Return: void
 */
void free_global(void)
{
	stack_t *untie;
	stack_t *fill = NULL;

	untie = *lead;

	while (untie)
	{
		fill = untie->next;

		free(untie);

		untie = fill;
	}
}
