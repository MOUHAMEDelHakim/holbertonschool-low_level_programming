#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: string to copy to
 * @src: cstring to copy from
 * @n: how many chars to copy
 * Return: the pointer to the char array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
