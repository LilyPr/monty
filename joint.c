#include "monty.h"

/**
 * add_up - add a new node to a circular linked list
 * @stack: double pointer to the beginning of the circular linked list
 * @n: value to add to the new node
 *
 * Description: the function will add the node to the begining 
 *
 * Return: pointer to the new node, or NULL on failure
 */
stack_t *add_up(stack_t **stack, const int n)
{
	stack_t *curr;

	if (stack == NULL)
		return (NULL);
	curr = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	curr->n = n;
	if (*stack == NULL)
	{
		curr->prev = curr;
		curr->next = curr;
	}
	else
	{
		(*stack)->prev->next = curr;
		curr->prev = (*stack)->prev;
		(*stack)->prev = curr;
		curr->next = *stack;
	}
	if (universal.queue == STACK || universal.length == 0)
		*stack = curr;
	return (curr);
}
