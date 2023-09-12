#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory of the dog
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
