#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - To free dogs
 *@d: pointer to dog
 *Return void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (name != NULL)
		free(d->name);
		if (owner != NULL)
		free(d->owner);
	}
	free(d);
}
