#include "monty.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * readFile - read bytecode file
 *
 * @filename:pathname to file
 * @top_stack: pointer to the top of the stack
 */

void readFile(FILE *filename, stack_t **top_stack)
{
	char *line;
	size_t i = 0;
	int countLine = 0;
	ssize_t read_file;


	char *token = NULL;

	/* open file bytecode */

	while ((read_file = getline(&line, &i, filename)) != -1)
	{
		countLine++;
		token = strtok(line, "\n ");
		if (token == NULL || strncmp(token, "#", 1) == 0)
			continue;

		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n ");
			_push(token, top_stack, countLine);
		}
		else
			get_opcode(token, top_stack, countLine);
	}
	free(line);
}
