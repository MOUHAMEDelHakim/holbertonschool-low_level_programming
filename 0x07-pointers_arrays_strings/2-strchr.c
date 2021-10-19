#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 * @c: char found in s
 * @s: pointer
 * Return: the first ooccurrence c in the string s or NULL
 *
 */
char *_strchr(char *s, char c)
{
int i;
while (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
