#include <stdio.h>
#include "dog.h"
/**
 *print_dog - Prints struct dog
 *@d: data to check
 *Return void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = 0;
	if ((*d).owner == 0)
		(*d).owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
