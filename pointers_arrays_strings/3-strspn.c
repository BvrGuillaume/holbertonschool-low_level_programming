#include "main.h"
/**
 *_strspn - function
 *@s: pointeur
 *@accept: pointeur
 *Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		char *a = accept;

	while (*a != '\0')
	{
		if (*s == *a)
	{
		i++;
			break;
	}
		a++;
	}
		if (*a == '\0')
			break;
		s++;
	}
	return (i);
}
