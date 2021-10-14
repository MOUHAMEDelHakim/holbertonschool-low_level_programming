#include "main.h"
/**
 * _strncpy- link two strings
 * @dest :string to be concatenated with src
 * @src : string to concatenate to dest
 * @n : how many bytes to link from src to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;


for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (; i < n ; i++)
dest[i] = '\0';
return (dest);
}
