#include "monty.h"

/**
* add - adds nodes at the top of the stack
* @stack: pointer of linked list
* @line_number: line number
* Return: void
*/

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *temp2;
	(void) stack;

	if (information->head == NULL || information->head->next == NULL)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);

		exit(EXIT_FAILURE);
	}

	temp = information->head;
	temp2 = temp->next;
	temp2->n += temp->n;

	information->head = temp2;

	free(temp);
}
