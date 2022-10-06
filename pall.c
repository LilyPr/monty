#include "monty.h"

/**
 * pall - print all values on `stack' starting from the top
 * @stack: double pointer to head of stack
 * @line_number: line number being executed from script file
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void) line_number;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
