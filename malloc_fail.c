#include "monty.h"

/**
* malloc_failure - release memory if null
* Return: void
*/

void malloc_failure(void)
{
	printf("Error malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}

/**
* free_args - free arguments
* Return: void
*/

void free_args(void)
{
	if (information == NULL)
		return;
	if (information->instruction)
	{
		free(information->instruction);
		information->instruction = NULL;
	}
	free_head();
	if (information->buffer)
	{
		free(information->buffer);
		information->buffer = NULL;
	}
	free(information);
}

/**
* free_head - free first node
* Return: void
*/
void free_head(void)
{
	if (information->head)
	{
		free_stack(information->head);
	}
	information->head = NULL;
}

/**
* free_stack - free stack
* Return: void
*/
void free_stack(stack_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_stack(head->next);
	}
	free(head);
}
