#include "monty.h"

/**
 * free_stack - frees the stack on exit
 * @level: exit status
 * @arg: double pointer to the stack
 *
 * Return: void
 */
void free_stack(int level, void *arg)
{
	stack_t **stack;
	stack_t *next;

	(void)level;

	stack = (stack_t **)arg;
	if (*stack)
	{
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
	}
	while (*stack != NULL)
	{
		next = (*stack)->next;
		free(*stack);
		*stack = next;
	}
	universal.length = 0;
}
