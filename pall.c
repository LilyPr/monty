#include "monty.h"

/**
 * pall - print all values on `stack' starting from the top
 * @stack: double pointer to head of stack
 * @line_number: line number being executed from script file
 *
 * Return: void
 */
void pall(stack_it **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	(void) line_number;

	if (*stack)
	{
		tmp = *stack;
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->next;
		}
	}
}
