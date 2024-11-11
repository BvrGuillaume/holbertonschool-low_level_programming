#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function
 * @size: variable
 * @c: variable
 * Return: char
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;

	char *array;

	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}



	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	array[i] = '\0';

		return (array);
}
