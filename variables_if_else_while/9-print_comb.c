#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n < 57)
		putchar(',');
		if (n < 57)
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
