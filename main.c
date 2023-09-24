#include "monty.h"
#include <stdio.h>

info_t *information = NULL;

/**
* main - main function
* @ac: ac argument
* @av: av argument
* Return: always return 0
*/

int main (int ac, char **av)
{
	size_t n = 0;

	if (ac < 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	init_args();
	read_stream(av[1]);

	while (getline(&information->buffer, &n, information->stream) != -1)
	{
		/*tokenize function()*/
		string_parser();
		execute();
		run_codes();
	}
	close_stream();
	free_token();
	free_args();
	return (0);
}
