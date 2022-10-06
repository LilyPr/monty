#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 * @stack: double pointer to the begining of the linked list
 * @line_number: script line number
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!stack || !(*stack) || !((*stack)->next))
		return;

	tmp = *stack;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;
	tmp->prev->next = NULL;
	tmp->prev = NULL;

	(*stack)->prev = tmp;

	(*stack) = tmp;

	(void) line_number;
}
