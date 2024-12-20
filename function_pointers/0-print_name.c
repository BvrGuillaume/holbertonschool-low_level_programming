#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that print a name
 * @name: the name to print
 * @f: pointernto the function to use for printing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
