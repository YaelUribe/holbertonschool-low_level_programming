#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *strln - string lenght
 *@s:contains a character array
 *Return: Lenght of the string
 */
int strln(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		;
	}
	return (y);
}

/**
 *stringcpy - function that copies the string pointed to by par
 *@destination: Parameter
 *@par: Parameter
 *Return: destination
 */
char *stringcpy(char *destination, char *par)
{
	int o;

	for (o = 0; par[o] != '\0'; o++)
	{
		destination[o] = par[o];
	}
	destination[o] = '\0';
	return (destination);
}


/**
 *new_dog - new name for the dog
 *@name: Dog's Name
 *@age: Dog's age
 *@owner: Dog's owner
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int r, f;
	char *w, *t;
	struct dog *nudog;

	nudog = malloc(sizeof(struct dog));
	if (nudog == NULL)
	{
		return (NULL);
	}
	r = strln(name);
	f = strln(owner);
	w = malloc(r + 1);
	if (w == NULL)
	{
		free(nudog);
		return (NULL);
	}
	t = malloc(f + 1);
	if (t == NULL)
	{
		free(nudog);
		free(w);
		return (NULL);
	}
	w = stringcpy(w, name);
	t = stringcpy(t, owner);
	nudog->name = w;
	nudog->age = age;
	nudog->owner = t;
	return (nudog);
}
