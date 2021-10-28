#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a fanction allocates memory using.
 * @b : Size of allocation.
 * Return: int
 */
void *malloc_checked(unsigned int b)
{
void *int = malloc(b);
if (int == NULL)
exit(98);
return (int);
}
