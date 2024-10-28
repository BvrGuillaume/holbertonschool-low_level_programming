#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * more_numbers - check the code
 */
void more_numbers(void)
{
	int number;
	int i = 0;

	while (i < 10)
	{
		for (number = 0 ; number <= 14 ; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
