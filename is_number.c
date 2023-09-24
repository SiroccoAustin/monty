#include "monty.h"

/**
* is_number - checks if string is a number
* Return: true if ch is a number
*/

bool is_number(char ch)
{
	return (ch >= '0' && ch <= '9');
}

/**
* is_digit - check if str is a number
* @str: string
* Return: 1 if true and 0 if false
*/

int is_digit(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}
		if (!is_number(str[i])) 
		{
			return 0;
		}
		i++;
	}
	return (1);
}
