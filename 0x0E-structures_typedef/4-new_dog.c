#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */

char *_strdup(char *str)
{
	char *strdup;
	int i, j;

	i = j = 0;
	if (!str)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	strdup = malloc((sizeof(char) * j + 1));
	if (!strdup)
	{
		return (NULL);
	}
	while (str[i])
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}

/**
 *new_dog - function that creates a new dog
 *@name: name
 *@age: age
 *@owner: owner
 *Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *g = malloc(sizeof(dog_t));

	if (!g)
	{
		return (NULL);
	}
	g->name = _strdup(name);
	g->age = age;
	g->owner = _strdup(owner);
	if (!g->name)
	{
		free(g);
		return (NULL);
	}
	if (!g->owner)
	{
		free(g->name);
		free(g);
		return (NULL);
	}
	return (g);
}
