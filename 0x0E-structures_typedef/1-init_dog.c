#include <stdio.h>
/**
 *init_dog-  a function that initialize a variable
 *@d : struct to initialise
 *@name : dog name
 *@age : dog age
 *@owner : owner of the dog
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
