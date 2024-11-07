#include "main.h"
/**
 *_check_prime - function
 *@n: number
 *@i: number
 *Return: -1 if b > of result a * a and a if b = a
 */
int _check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_check_prime(n, i + 2));
}
/**
 * is_prime_number - function
 * @n: number
 * Return: print 1 if prime number
 */
int is_prime_number(int n)
{
	if (n <= 2 || n % 2 == 0)
		return (0);
return (_check_prime(n, 3));
}
