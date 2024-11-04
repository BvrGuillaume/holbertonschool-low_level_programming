#include "main.h"

/**
 * _memcpy - copy function
 * @dest: destination
 * @src: source
 * @n: byte
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i = dest;

	while (n--)
	{
		*i++ = *src++;
	}

	return (dest);
}
