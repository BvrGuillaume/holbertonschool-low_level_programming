#include "main.h"
#include <ctype.h>
/**
* int _islower(in c) - c lowercase
* Return: Always 0 (Success)
* Description: if c is lowercase return 1 else return 0
*/
int _islower(int c)
{
	if (islower(c))
		return (1);

	else
		return (0);
}
