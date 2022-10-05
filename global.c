#include "monty.h"

/**
 * free_global - globally frees memory, previously alocated in the program
 *
 * Return: void
 */
void free_global(void)
{
	stack_t *del = stack;
	
	while (stack)
	{
		stack = stack->next;
		free(del);
		delete = stack;
	}
	free(untie.token);
	fclose(untie.bty);
}
