#include "monty.h"

/**
* pint - print first node in a stack
* @stack: pointer of linked list
* @line_number: line num
* Return: void
*/

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	if (information->head == NULL)
	{
        	fprintf(stderr, "L%d: can't pint, stack is empty\n", line_number);
        	fclose(information->stream);
        	free_args();
        	exit(EXIT_FAILURE);
	}
	printf("%d\n", information->head->n);
}
