#include "monty.h"
/**
 * cmp_line - parses to read and write for value var_glodbal
 * and ragument
 * @line: the line to getline and to be parsed
 * @stack: pointer to head of the stack
 * @line_number: the current line number
 * Return: returns the option code or null on fail
 */
char *get_line(char *line, toy_stack_t **stack, unsigned int line_number)
{
	char *op_code, *push, *argument;
	(void)stack; /* struct value stack */

	push = "push";
	op_code = strtok(line, "\n\t\r ");
	if (op_code == NULL)
		return (NULL);
	if (strcmp(op_code, push) == 0)
	{
		argument = strtok(NULL, "\n\t\r ");
		if (_isnumber(argument) == 1 && argument != NULL)
		{
			var_global.push_arg = atoi(argument);
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	return (op_code);
}
