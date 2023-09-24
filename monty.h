#define _POSIX_C_SOURCE 200809L
#ifndef MONTY_H
#define MONTY_H

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

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

typedef struct info_s
{
	FILE *stream;
	char *buffer;
	char **tokenized;
	stack_t *head;
	unsigned int line_number;
	int num_tokens;
	instruction_t *instruction;
} info_t;

extern info_t *information;

void read_stream(char *filename);
void init_args(void);
void string_parser(void);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
int is_digit(char *str);
void execute(void);
void run_codes(void);
void failed_stream(char *filename);
void malloc_failure(void);
void close_stream(void);
void free_args(void);
void free_stack(stack_t *head);
void free_head(void);
void free_token(void);
/*void free_memory(void)*/
void invalid_information(void);
#endif /*MONTY_H*/
