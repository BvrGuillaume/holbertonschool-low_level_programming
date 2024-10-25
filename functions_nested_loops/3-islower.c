#include "main.h"
#include <ctype.h>
/**
*_islower - c lowercase
* @c: letter tested
* Return: Always 0 (Success)
* Description: if c is lowercase return 1 else return 
*/
int _islower(int c)
{
	if (islower(c))
		return (1);

	else
		return (0);
}
