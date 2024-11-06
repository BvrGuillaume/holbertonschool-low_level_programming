#include "main.h"

/**
 * _pow_recursion - function
 * @y: integer
 * @x: number
 * Return: 1 or -1 depend if its positiv or negativ
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
