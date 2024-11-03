#include "main.h"
/**
 * cap_string - function
 * @str: variable
 *
 * Return: char
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int maj, i = 0;

	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - ' ';
	}

	while (*str != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == ',' || str[i] == ';' || str[i] == '.'
		|| str[i] == '!' || str[i] == '?' || str[i] == '"'
		|| str[i] == '(' || str[i] == ')' || str[i] == '{'
		|| str[i] == '}')

		{
			maj = 2;
		}

		if ((maj == 1) && (str[i] < 'a' || str[i] > 'z'))
		{
			maj = 0;
		}

		if ((maj == 1) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ' ';
			maj = 0;
		}

		maj--;
		i++;
	}
	return (ptr);
}
