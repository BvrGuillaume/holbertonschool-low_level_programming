#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of a string
 * @str: checked
 * Return: void
 */

void puts_half(char *str)
{
	int len, i;

	len = _strlen(str) - 1;
	for (i = 0; i <= len; i++)
	{
		if (i > len / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
