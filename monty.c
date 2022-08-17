#include "monty.h"
/**
 * main - driver fuction for monty program
 * @argc: int num of argument
 * @argv: option function 
 * Return: 0
 */
int main(int argc, char **argv)
{
     toy_stack_t *top;

     top = NULL; /* control stack */
     if (argc != 2)
     {
          fprintf(stderr, "USAGE: monty file\n");
          exit(EXIT_FAILURE);
     }
     readFile(argv[1], &top);
     return (0);   
}
