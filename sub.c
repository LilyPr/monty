#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second top element
 * of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *fill;
	int result;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	fill = *stack;

	result = fill->next->n - fill->n;
	fill->next->n = result;

	*stack = fill->next;

	free(fill);
}
