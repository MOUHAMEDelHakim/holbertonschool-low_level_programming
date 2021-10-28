#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a fanction allocates memory using.
 * @b : Size of allocation.
 * Return: i
 */
void *malloc_checked(unsigned int b)
{
void *i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
