#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	char *result;
	int i = 0;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++);

	for (length2 = 0; s2[length2] != '\0'; length2++);


	result = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		result[length1 + i] = s2[i];
	}
	result[length1 + length2] = '\0';

		return (result);
}
