#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - print every minutes of the day
 * Return: Always 0(Success)
 */
void jack_bauer(void)
{
	int a, b;

	a = 0;

	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
