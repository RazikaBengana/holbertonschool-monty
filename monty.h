#ifndef MONTY_H_
#define MONTY_H_

#define EXIT_FAILURE 1
#define UNUSED(x) (void)(x)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

extern int push_arg;
/**
 * struct toy_stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

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
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_variable - opcoode and its function
 * @file: the opcode
 * @push_arg: function to handle the opcode
 * @buffer: pointer to
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */


extern int var_global;

void readFile(FILE *filename, stack_t **top_stack);
int _isnumber(char *str);
void get_opcode(char *str, stack_t **stack, unsigned int lineNb);
void _push(char *str, stack_t **head_stack, unsigned int line_number);
void _pall(stack_t **head_stack, unsigned int line_number);
#endif
