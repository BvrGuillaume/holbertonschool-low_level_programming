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
		_putchar(str[a]);
		str++;
	}

	_putchar('\n');
}
