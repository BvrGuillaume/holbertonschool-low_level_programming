#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *@a: letter checked
 *@b: letter checked
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
