#include "monty.h"
#include <ctype.h>

/**
 * pstr - print string from stack of ints up to null byte,
 * first non-ascii character, or end of stack
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int m;

	(void)line_number;

	tmp = *stack;
	while (tmp != NULL)
	{
		m = tmp->n;
		if (!isascii(m) || m == 0)
			break;
		putchar(m);
		tmp = tmp->next;
		if (tmp == *stack)
			break;
	}
	putchar('\n');
}
