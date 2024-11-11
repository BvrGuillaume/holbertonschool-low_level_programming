#include "main.h"
/**
 *_sqrt - function
 *@a: number
 *@b: number
 *Return: -1 if b > of result a * a and a if b = a
 */
int _sqrt(int a, int b)
{
	if (a * a > b)
	{
		return (-1);
	}
	else if (a * a == b)
	{
		return (a);
	}
	return (_sqrt(a + 1, b));
}
/**
 * _sqrt_recursion - result of calcul
 * @n: number
 * Return: _sqtr
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}