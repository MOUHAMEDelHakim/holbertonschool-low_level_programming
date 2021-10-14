#include "main.h"
/**
 * _strncat)- link two strings
 * @dest :string to be concatenated with src
 * @src : string to concatenate to dest
 * @n : how many bytes to link from src to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int l = 0, i;

while (dest[l])
{
l++;
}

for (i = 0; src[i] && i < n; i++)
{
dest[l] = src[i];
l++;
}

dest[l] = '\0';
return (dest);
}
