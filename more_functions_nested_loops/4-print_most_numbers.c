#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_most_numbers - check the code
 */
void print_most_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		_putchar(number);
		number++;
		if (number == '2' || number == '4')
			number++;
	}
	_putchar('\n');
}
