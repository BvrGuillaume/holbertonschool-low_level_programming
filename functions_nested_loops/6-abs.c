#include "main.h"
#include <stdlib.h>
/**
 * _abs - Compute the  value of an integer
 * @n: Integer tested
 * Return: The absolute value of integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
