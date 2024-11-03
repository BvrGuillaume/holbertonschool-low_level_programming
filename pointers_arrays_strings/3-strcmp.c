#include "main.h"
/**
 * _strcmp - compare
 * @s1: string to compare
 * @s2: string to compare
 * Return: return
 */
int _strcmp(char *s1, char *s2)
{
	int a, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			a = s1[i] - s2[i];
			break;
		}
		else
			a = 0;
	}

	return (a);
}
