#include "main.h"
/**
 * *_strncpy - that copies the string pointed to by src
 * @n: size
 * @dest: int
 * retur: (dest)
 */
char *_strcpy(char *dest, char *src, size_t n)
{
size_t i;
for 
(i = 0; i < n && src[i] != '\0'; i++);
dest[i] = src[i];
for 
( ; i < n; i++);
dest[i] = '\0';
return dest; 
}
