#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *fill, *top;

	if (!stack || !(*stack) || !(*stack)->next)
		return;

	fill = *stack;

	top = fill->next;
	top->prev = NULL;

	while (fill->next != NULL)
		fill = fill->next;

	fill->next = *stack;

	(*stack)->next = NULL;
	(*stack)->prev = fill;

	*stack = top;

	(void) line_number;
}
