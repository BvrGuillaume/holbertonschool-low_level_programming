#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function
 * @s1: chaine 1
 * @s2: chaine 2
 * @n: variable
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int l1 = 0, l2 = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (n >= l2)
	{
		n = l2;
	}
	result = malloc(l1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[l1 + i] = s2[i];
	}
	result[l1 + n] = '\0';
	return (result);
}
