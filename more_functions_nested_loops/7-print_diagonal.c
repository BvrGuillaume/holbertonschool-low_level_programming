#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_diagonal - check the code
 * @n: number checked
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
				_putchar('\\');
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
