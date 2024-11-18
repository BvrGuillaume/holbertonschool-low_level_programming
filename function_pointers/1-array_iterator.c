#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - function
 * @array: array
 * @size: size of array
 * @action: pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
