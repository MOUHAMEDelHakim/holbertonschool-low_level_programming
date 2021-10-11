#include "main.h"
int _strlen(char *s);
/**
 * print_rev - function that prints a string, in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int c;
int len = _strlen(s);
for (c = len - 1; c >= 0; c--)
putchar(s[c]);
putchar('\n');
}
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
c++;
return (c);
}
