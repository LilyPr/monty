#include "monty.h"

/**
 * exec_op - check op against valid opcodes
 * @op: op to check
 * @stack: double pointer to the beginnig of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void exec_op(char *op, stack_t **stack, unsigned int line_number)
{
	size_t i;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"mul", mul},
		{"div", div},
		{"mod", mod},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", stack},
		{"queue", queue},
		{"pchar", pchar},
		{"pstr", pstr},
		{NULL, NULL}
	};

	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(ops[i].opcode, op) == 0)
		{
			ops[i].f(stack, line_number);
			return;
		}
	}

	dprintf(STDOUT_FILENO,
		"L%u: unknown instruction %s\n",
		line_number, op);
	exit(EXIT_FAILURE);
}
