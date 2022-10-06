#include "monty.h"

/**
 * check_code - to check code from the line op
 * @stack: the pointer to the head of the stack
 * @op: the line with commands/instructions
 * @linenumber: a number of the line
 *
 * Return: void
 */
void check_code(stack_t **stack, char *op, unsigned int linenumber)
{
	int i;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	for (i = 0; ops[i].opcode; i++)
		if (strcmp(op, ops[i].opcode) == 0)
		{
			ops[i].f(stack, linenumber);
			return;
		}

	if (strlen(op) != 0 && op[0] != '#')
	{
		printf("L%u: unknown instruction %s\n", linenumber, op);
		exit(EXIT_FAILURE);
	}
}
