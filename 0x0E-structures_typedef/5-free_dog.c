#include "dog.h"
/**
 * free_dog - a function that frees dogs
 *
 * @d: pointer to struct to free
 *
 * Return: always void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
