#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - copy string of char
 * @str: string
 * Return: new string or NULL
 */
char *_strdup(const char *str)
{
	char *copy;
	int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	strcpy(copy, str);
	return (copy);
}

/**
 * new_dog - create a new structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 * Return: new structure or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
		}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
		}

	dog->age = age;
	return (dog);
}
