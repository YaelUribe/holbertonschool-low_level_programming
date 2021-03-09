#include <stdio.h>
#include "dog.h"
/**
 *strln - string lenght
 *@f:contains a character array
 *Return Lenght of the string
 */
int strln(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
		return (y);
}
/**
 *stringcpy - function that copies the string pointed to by par
 *@destination: Parameter
 *@par: Parameter
 *return: destination
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
 */
dog_t *new_dog(char *name, float age, char *owner)
