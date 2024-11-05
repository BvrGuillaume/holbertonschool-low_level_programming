#include "main.h"

/**
 * _strpbrk - function
 *@accept: pointer
 *@s: pointer
 * Return: null if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *i;

	while (*s != '\0')
	{
		for (i = accept; *i; i++)
		{
			if (*s == *i)
				return (s);
		}
				s++;
	}
	return ('\0');
}
