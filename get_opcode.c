#include "monty.h"
#include <stdlib.h>
#include <string.h>

/**
 *get_opcode - select the function
 *@opcode: the option code
 *@stack: the stack
 *@lineNb: line number
 *Return: returns a fuctions, or NULL on failure
 */
void get_opcode(char *opcode, stack_t **stack, unsigned int lineNb)
{
	int i = 0;
	instruction_t instruct[] = {
	{"pall", _pall},
	{"pint", _pint},
	{"pop",  _pop},
	{"swap", _swap},
	{NULL, NULL}};

	i = 0;
	while (instruct[i].opcode)
	{
		if (strcmp(instruct[i].opcode, opcode) == 0)
		{
			instruct[i].f(stack, lineNb);
			break;
		}
		i++;
	}
	if (instruct[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", lineNb, opcode);
		exit(EXIT_FAILURE);
	}
}
