#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of a line of the file
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *fill = *stack;

	(void) line_number;

	while (fill)
	{
		if (fill->n != 0 && isascii(fill->n))
			putchar(fill->n);
		else
			break;

		fill = fill->next;
	}

	putchar('\n');
}
