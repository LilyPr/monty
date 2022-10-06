#include "monty.h"

/**
 * sub - subtracts the top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int result;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	result = tmp->next->n - tmp->n;
	tmp->next->n = result;

	*stack = tmp->next;

	free(tmp);
}
