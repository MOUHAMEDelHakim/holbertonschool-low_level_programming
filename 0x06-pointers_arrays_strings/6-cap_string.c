#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @ch: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *ch)
{
	int i = 0;

	while (ch[i])
	{
		while (!(ch[i] >= 'a' && ch[i] <= 'z'))
			i++;

if (ch[i - 1] == ' ' ||
ch[i - 1] == '\t' ||
ch[i - 1] == '\n' ||
ch[i - 1] == ',' ||
ch[i - 1] == ';' ||
ch[i - 1] == '.' ||
ch[i - 1] == '!' ||
ch[i - 1] == '?' ||
ch[i - 1] == '"' ||
ch[i - 1] == '(' ||
ch[i - 1] == ')' ||
ch[i - 1] == '{' ||
ch[i - 1] == '}' ||
i == 0)
ch[i] -= 32;
i++;
}
	return (ch);
}
