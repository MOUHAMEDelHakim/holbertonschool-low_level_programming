#include <stdio.h>
/**
 * main - Program that prints all arguments it recieves.
 * @argc: number of args
 * @argv: arrays of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int arg;
for (arg = 0; arg < argc ; arg++)
printf("%s\n", argv[arg]);
return (0);
}
