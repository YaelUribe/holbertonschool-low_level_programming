#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 *struct dog - name, age and owner
 *@name: Dog's name
 *@age: Dog's age
 *@owner: Dog's owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
