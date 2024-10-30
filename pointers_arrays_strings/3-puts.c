#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 *@str: letter checked
 */
void _puts(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		str++;
		_putchar(str[a]);
	}

	_putchar('\n');
}
