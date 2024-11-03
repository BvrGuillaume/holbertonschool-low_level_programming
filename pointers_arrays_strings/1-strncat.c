#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenates two strings
 *@dest: destination
 *@src: source
 *@n: bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
