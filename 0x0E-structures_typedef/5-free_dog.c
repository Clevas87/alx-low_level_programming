#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs.
 * @d: Struct dog to free.
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
