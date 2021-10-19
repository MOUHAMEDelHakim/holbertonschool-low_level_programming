#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @ch: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *leet(char *ch)
{
int i = 0, j;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (ch[i])
{
for (j = 0; j <= 7; j++)
{
if (ch[i] == leet[j] ||
ch[i] - 32 == leet[j])
ch[i] = j + '0';
}
i++;
}
return (ch);
}
