#include "main.h"
/**
* print_alphabet - lowercase
* Return: Always 0 (Success)
* Description: alphabet lowercase
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
