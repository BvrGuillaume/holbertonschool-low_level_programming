#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		alphabet++;
	if (alphabet != 'q' && alphabet != 'e')
		putchar(alphabet);
	}
	putchar('\n');
		return (0);
}
