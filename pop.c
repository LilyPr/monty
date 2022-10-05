#include "monty.h"

/**
 * pop - pop top element off of `stack'
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *pop = *stack;

	if (universal.length == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pop an empty stack\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;
	if (universal.length != 1)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	free(pop);
	universal.length--;
}
