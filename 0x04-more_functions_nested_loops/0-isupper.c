#include "main.h"
#include <stdio.h>

/**
 * main - uppercase character
 * @c : print character 
 * Returns 1 if c is uppercase
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
