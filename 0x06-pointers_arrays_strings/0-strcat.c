#include "main.h"
/**
 * _strcat)- link two strings
 * @dest :string to be concatenated with src
 * @src : string to concatenate to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int l = 0, i;

while (dest[l])
{
l++;
}

for (i = 0; src[i] != '\0'; i++)
{
dest[l] = src[i];
l++;
}

dest[l] = '\0';
return (dest);
}
