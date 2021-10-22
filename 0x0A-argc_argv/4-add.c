#include <stdio.h>
#include <stdlib.h>
/**
 * main- sim 2 ints
 * @argc : nimber of args
 * @argv : array of args
 * Return: 0 for success or 1 for error
 */
int main(int argc, char *argv[])
{
int n, digit, s = 0;
for (n = 1; n < argc; n++)
{
for (digit = 0; argv[n][digit]; digit++)
{
if (argv[n][digit] < '0' || argv[n][digit] > '9')
{
printf("Error\n");
return (1);
}
}
s += atoi(argv[n]);
}
printf("%d\n", s);
return (0);
}
