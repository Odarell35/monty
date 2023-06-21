#ifndef _MONTY_H
#define _MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
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
/*prototypes*/
void pall_data(stack_t **stack, unsigned int line_number);
void pint_data(stack_t **stack, unsigned int line_number);
void push_data(stack_t **stack, unsigned int line_number);
void pop_data(stack_t **stack, unsigned int line_number);
void nop_data(stack_t **stack, unsigned int line_number);
/*additionals*/
stack_t *add_dnodeint(stack_t **head, const int n);
int monty_operations(stack_t **stack, char **arr_command, unsigned int line_number);
int read_montyfile(char *file);
/*protypes for error msg*/
void error_one(void);
void error_two(char *file);
void error_three(unsigned int line_number, char *arr_command);
void error_four(void);
void error_five(unsigned int line_number);
void error_six(unsigned int line_number);
#endif
