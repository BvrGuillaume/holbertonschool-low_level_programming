#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check the code
 * @c: letter tested
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
