#include "stdio.h"
/**
 * print_alphabet - alphabet a-z
 *
 * Return: Void
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
putchar (ch);
putchar ('\n');

}
/**
 * main- alphabet a-z
 *
 * Return: 0
 */
int main(void)
{
print_alphabet();
return (0);
}
