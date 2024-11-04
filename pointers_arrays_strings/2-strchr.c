#include "main.h"
/**
 * _strchr - function
 * @s: pointeur
 * @c: variable
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);

		if (!*s)
			return (0);
	}
	return (s);
}
