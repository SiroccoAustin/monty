#include "monty.h"

/**
* free_token - free tokens
* Return: void
*/

void free_token(void)
{
	int i = 0;
	while (information->tokenized[i])
	{
		free(information->tokenized[i]);
		i++;
	}
	free(information->tokenized);
	information->tokenized = NULL;
}
