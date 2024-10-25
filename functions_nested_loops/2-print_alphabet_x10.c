#include "main.h"
/**
* print_alphabet_x10 - repeat 10 times
* Return: void
* Description: alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char letter;
	int number;

	while (number < 10)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		number++;
		_putchar('\n');
	}
}
