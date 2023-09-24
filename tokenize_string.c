#include "monty.h"

/**
* string_parser - tokenize strings
* Return: void
*/

void string_parser(void)
{
	char *delim = " \t\n";
	char *linecopy = NULL;
	char *token = NULL;
	int i = 0;

	linecopy =  strdup(information->buffer);
	token = strtok(linecopy, delim);
	while (token != NULL)
	{
		information->num_tokens++;
		token = strtok(NULL, delim);
	}
	information->tokenized = malloc(sizeof(char *) * information->num_tokens);

	strcpy(linecopy, information->buffer);
	token = strtok(linecopy, delim);
	while (token != NULL)
	{
		if (information->tokenized[i] == NULL)
			malloc_failure();

		information->tokenized[i] = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	information->tokenized[i] = NULL;
	free(linecopy);
}
