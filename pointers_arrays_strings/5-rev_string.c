#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - check the code
 *@s: letter checked
 */
void rev_string(char *s)
{
	int i, len = _strlen(s);
	char tmp;
	
	for (i = len; i >= len ; i--)
	{
		tmp = s[i];
		s[i] = s [len - i];
		s[len - i] = tmp;
	}
}
