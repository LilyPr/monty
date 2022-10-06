#include "monty.h"

/**
 * swap - swap top two elements of `stack'
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;

	(*stack)->prev = tmp;
	(*stack)->next = tmp->next;

	tmp->prev = NULL;

	if (tmp->next)
		tmp->next->prev = *stack;

	tmp->next = *stack;

	*stack = tmp;
}
