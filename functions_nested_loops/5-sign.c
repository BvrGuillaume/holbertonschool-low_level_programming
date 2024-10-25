#include "main.h"
#include <ctype.h>
/**
 * print_sign - greater than 0
 * @n: letter tested
 * Return: Always 0 (Success)
 * Description: print sign of a number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
