#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * print_rev - check the code
 *@s: letter checked
 */
void print_rev(char *s)
{
	int a;
	
	for (a = _strlen(s) - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
		
		_putchar('\n');
}
