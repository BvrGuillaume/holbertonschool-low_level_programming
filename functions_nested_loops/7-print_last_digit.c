#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print the last digit of a number
 * @n: Digit tested
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	while (n >= 10)
		n /= 10;
	return (n % 10);
}
