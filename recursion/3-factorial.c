#include "main.h"
/**
 * factorial - function
 * @n: number
 * Return: 1 -1 or 0
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if  (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
