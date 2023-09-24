#include "monty.h"

/**
* init_args - initialize arguments
* Return: void
*/

void init_args(void)
{
	information = malloc(sizeof(info_t));
	if (information == NULL)
	{
		malloc_failure();
	}
	information->instruction = malloc(sizeof(instruction_t));
	if (information->instruction == NULL)
	{
		malloc_failure();
	}
	information->stream = NULL;
	information->buffer = NULL;
	information->tokenized = NULL;
	information->line_number = 0;
	information->num_tokens = 0;
}
