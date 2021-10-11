#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
int len = 0, i = 0;
char t;
while (s[i++])
len++;
for (i = len - 1; i >= len / 2; i--)
{
t = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = t;
}
}
