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
/**
 * struct details_s - variables used on monty program
 * @arr_command: array of commands
 * @fd: file descriptor
 * @buf: file content
 * @line_number: number of liines in file
 */
typedef struct details_s
{
	char **arr_command;
	FILE *fd;
	char *buf;
	unsigned int line_number;
}details_t;
extern details_t details;
/*prototypes*/
void pall_data(stack_t **stack, unsigned int line_number);
void pint_data(stack_t **stack, unsigned int line_number);
void push_data(stack_t **stack, unsigned int line_number);
void pop_data(stack_t **stack, unsigned int line_number);
void nop_data(stack_t **stack, unsigned int line_number);
void get_push(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
/*additionals*/
stack_t *add_dnodeint(stack_t **head, const int n);
int monty_op(stack_t **stack);
int read_montyfile(char *file);
/*protypes for error msg*/
void error_one(void);
void error_two(char *file);
void error_three(void);
void error_four(void);
void error_five(unsigned int line_number);
void error_six(unsigned int line_number);
/*prototype for push*/
void get_push(stack_t **stack, unsigned int line_number);
int _isdigit(char *str);
/*prototype of swap*/
void swap(stack_t **stack, unsigned int line_number);
/*prototype for add*/
void add(stack_t **stack, unsigned int line_number);
/*prototype sub*/
void get_sub(stack_t **stack, unsigned int line_number);

#endif
