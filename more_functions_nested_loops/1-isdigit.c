#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - check the code
 * @c: letter tested
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
