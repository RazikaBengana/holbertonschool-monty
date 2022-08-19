#include "monty.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - driver fuction for monty program
 * @argc: int num of argument
 * @argv: option function
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *argvName;
	stack_t *topStack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	argvName = argv[1];
	file = fopen(argvName, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argvName);
		exit(EXIT_FAILURE);
	}
	readFile(file, &topStack);
	fclose(file);
	return (0);
}
