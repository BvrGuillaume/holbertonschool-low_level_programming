#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 *@s: the address of memory to print
 *@b: byte use for filling
 *@n: Number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
