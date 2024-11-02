#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcat - check the code
 * @dest: string
 * @src: source
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*a != '\0')
		a++;

	while (*src != '\0')
	{
		*a++ = *src++;
	}

	*a = '\0';

	return (dest);
}
