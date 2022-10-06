#include "monty.h"

/**
 * check_arg - Check the arguments passed on to the interpreter
 * @arg: Number of args
 *
 * Return: void
 */
void check_arg(int arg)
{
	if (arg != MIN_ARGS)
		handle_error(ERR_ARG_USG, NULL, 0, NULL);
}
