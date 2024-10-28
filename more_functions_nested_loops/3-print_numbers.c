#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers - check the code
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar((n) + '0');
	}
	_putchar('\n');
}
