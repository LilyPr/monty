#include "monty.h"

/**
 * add - add the top two elements of the stack
 * @stack: double pointer tot he beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int sum;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	sum = tmp->n + tmp->next->n;
	tmp->next->n = sum;

	*stack = tmp->next;

	free(tmp);
}
