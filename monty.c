#include "monty.h"

/**
 * parse  - parses commands from the line op
 * @stack: the pointer to the head of the stack
 * @op: the line instructions
 * @line_number: a number of the line
 *
 * Return: void
 */
void parse(stack_t **stack, char *op, unsigned int line_number)
{
	int i;
	instruction_t code = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	for (i = 0; code[i].opcode; i++)
		if (strcmp(op, code[i].opcode) == 0)
		{
			code[i].f(stack, line_number);
			return;
		}

	if (strlen(op) != 0 && op[0] != '#')
	{
		printf("L%u: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
	}
}
