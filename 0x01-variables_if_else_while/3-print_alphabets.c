#include <stdio.h>
/**
 * main -display-the-alphabet a-z and A-Z
 *
 * Return: 0
 */
int main(void)
{
char ch, chx;
for (ch = 'a' ; ch <= 'z' ; ch++)
putchar(ch);
for (chx = 'A' ; chx <= 'Z' ; chx++)
putchar(chx);
putchar('\n');
return (0);
}
