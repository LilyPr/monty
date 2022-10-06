#include "monty.h"

/**
 * push - push an integer onto the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *link;
	char *digit;

	digit = strtok(NULL, DELIMS);
	if (digit == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	link = malloc(sizeof(stack_t));
	if (link == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	link->n = atoi(digit);
	link->prev = NULL;
	link->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = link;

	*stack = link;
}
