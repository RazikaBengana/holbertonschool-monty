#include "monty.h"
/**
 * readFile - read bytecode file
 *
 * @filename:pathname to file
 * @top_stack: pointer to the top of the stack
 */

void readFile(char *filename, toy_stack_t **top_stack)
{
	char *line;
	size_t i = 0;
	int countLine = 1;
	instruct_func s;
	int check_file, read_file;

	/* open file bytecode */
	var_global.file = fopen(filename, "r");
	if (var_global.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((read_file = getline(&var_global.buffer, &i, var_global.file)) != -1)
	{
		line = get_line(var_global.buffer, top_stack, countLine);
		if ((line == NULL || line[0] == '#'))
		{
			countLine++;
			continue;
		}

		s = get_opcode(line);
		if (s == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", countLine, line);
			exit(EXIT_FAILURE);
		}
		s(top_stack, countLine);
		countLine++;
	}
	free(var_global.buffer);
	check_file = fclose(var_global.file);
	if (check_file == -1)
		exit(-1);
}
