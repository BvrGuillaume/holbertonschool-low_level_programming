#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - check the code
 *@s: letter checked
 * Return: always
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
