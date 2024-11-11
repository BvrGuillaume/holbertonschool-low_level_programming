#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function
 * @str: variable
 * Return: char
 */
char *_strdup(char *str)
{
	int length = 0;
	char *copy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	copy = (char *)malloc((length + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
