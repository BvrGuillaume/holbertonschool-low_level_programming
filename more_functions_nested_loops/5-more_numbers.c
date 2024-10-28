#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * more_numbers - check the code
 */
void more_numbers(void)
{
	int number = 0;

	while (number < 14)
	{
		for (number = 0 ; number <= 14 ; number++)
		{
			_putchar(number);
		}
		number++;
		_putchar('\n');
	}
}
