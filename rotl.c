#include "monty.h"

/**
 * rotl - rotates the stack to the top.
 * @stack:double pointer tot he begining of the linked list
 * @line_number: script line number
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *high;

	if (!stack || !(*stack) || !(*stack)->next)
		return;

	tmp = *stack;

	high = tmp->next;
	high->prev = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;

	(*stack)->next = NULL;
	(*stack)->prev = tmp;

	*stack = high;

	(void) line_number;
}
