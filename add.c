#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *fill;
	int total;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	fill = *stack;

	total = fill->n + fill->next->n;
	fill->next->n = total;

	*stack = fill->next;

	free(fill);
}
