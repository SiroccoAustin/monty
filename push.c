#include "monty.h"

/**
* push - push node at the stack
* @stack: pointer of linked list
* @line_number: line num
* Return: void
*/

void push(stack_t **stack, unsigned int line_number)
{
	/*stack_t *new_node;*/

	if (information->num_tokens <= 1 || !(is_digit(information->tokenized[1])))
	{
       	 	fprintf(stderr, "L%d: usage: push integer\n", line_number);
        	fclose(information->stream);
        	free_args();
        	exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		malloc_failure();
		exit(EXIT_FAILURE);
	}
	(*stack)->n = (int) atoi(information->tokenized[1]);
	(*stack)->prev = NULL;
	if (information->head != NULL)
	{
		(*stack)->next = information->head;
		information->head->prev = *stack;
	
	}
	information->head = *stack;
}
