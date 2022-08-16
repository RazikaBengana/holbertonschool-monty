#include "monty.h"
/**
 *get_op_func - select the function
 *@format : format de argument printf
 *Return: NULL if format is NUll
 */
int (*get_op_func(const char *format))
{
	int i;
	instruction_t p[] = {
		{"push", _push},
		/* {"pall", _pall},
		{"pint", _pint},
		{"pop",  _pop},
		{"swap", _swap}, */
		{NULL, NULL}};
	for (i = 0; p[i].opcode; i++)
	{
		if (*format == *(p[i].opcode))
		{
			return (p[i].f);
		}
	}
	return (NULL);
}