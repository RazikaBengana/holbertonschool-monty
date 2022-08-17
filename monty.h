#ifndef MONTY_H_
#define MONTY_H_

#define EXIT_FAILURE 1;

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern int push_arg;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct toy_stack_s
{
        int n;
        struct toy_stack_s *prev;
        struct toy_stack_s *next;
} toy_stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(toy_stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_variable - opcoode and its function
 * @file: the opcode
 * @push_arg: function to handle the opcode
 * @buffer: pointer to
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct global_variable
{
	FILE *file;
	int push_arg;
	char *buffer;
} global_var;

extern global_var var_global;


void readFile(char *filename, toy_stack_t **top_stack);
char *get_line(char *line, toy_stack_t **stack, unsigned int line_number);
int _isnumber(char *str);
typedef void (*instruct_func)(toy_stack_t **stack, unsigned int line_number);
instruct_func get_opcode(char *str);
void _push(toy_stack_t **stack, unsigned int line_number);
#endif
