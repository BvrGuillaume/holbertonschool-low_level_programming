#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - check the code
 *@s: letter checked
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = _strlen(s) - 1;
	for (i = 0; i < (_strlen(s) / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
	}
}
