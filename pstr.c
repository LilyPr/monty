#include "monty.h"
#include <ctype.h>

/**
 * pstr - print string from stack of ints up to null byte
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void) line_number;

	while (tmp)
	{
		if (tmp->n != 0 && isdigit(tmp->n))
			putchar(tmp->n);
		else
			break;

		tmp = tmp->next;
	}

	putchar('\n');
}
