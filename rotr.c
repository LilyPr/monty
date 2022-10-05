#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *fill;

	if (!stack || !(*stack) || !((*stack)->next))
		return;

	fill = *stack;

	while (fill->next != NULL)
		fill = fill->next;

	fill->next = *stack;
	fill->prev->next = NULL;
	fill->prev = NULL;

	(*stack)->prev = fill;

	(*stack) = fill;

	(void) line_number;
}
