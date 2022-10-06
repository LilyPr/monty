#include "monty.h"

/**
 * mul - multiply top two elements of stack and push result
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int result;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	result = tmp->next->n * tmp->n;
	tmp->next->n = result;

	*stack = tmp->next;

	free(tmp);
}
