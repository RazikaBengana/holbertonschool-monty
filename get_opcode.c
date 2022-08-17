#include "monty.h"
/**
 *get_op_func - select the function
 *@str : the opcode
 *Return: returns a fuctions, or NULL on failure
 */
instruct_func get_opcode(char *str)
{
	int i;
	instruction_t instruct[] = {
	    {"push", _push},
	/*     {"pall", _pall}, */
	  /*  {"pint", _pint}, */
	  /*  {"pop",  _pop}, */
	   /* {"swap", _swap}, */
	    {NULL, NULL}};

	i = 0;
	while (instruct[i].f != NULL && strcmp(instruct[i].opcode, str) != 0)
	{
		i++;
	}
	return (instruct[i].f);
}
