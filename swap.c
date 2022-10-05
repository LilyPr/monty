#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *fill;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	fill = (*stack)->next;

	(*stack)->prev = fill;
	(*stack)->next = fill->next;

	fill->prev = NULL;

	if (fill->next)
		fill->next->prev = *stack;

	fill->next = *stack;

	*stack = fill;
}
