#include "main.h"
#include <ctype.h>
/**
 * _isalpha - c lowercase uppercase
 * @c: letter tested
 * Return: Always 0 (Success)
 * Description: if c is lower or upper return 1
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);

	else
		return (0);
}
