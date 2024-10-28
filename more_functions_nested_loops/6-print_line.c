#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_line - check the code
 * @n: number checked
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
