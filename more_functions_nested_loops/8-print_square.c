#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_square - check the code
 * @size: letter checked
 */

void print_square(int size)
{
	int a, b;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
