#include "main.h"
/**
* print_alphabet_x10 - lowercase
* Return: void
* Description: alphabet lowercase
*/
void print_alphabet_x10(void)
{
	char letter;
	int number;

	while (number < 10) 
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');

			number++;
	}
}
