#include <stdio.h>
/**
 * main - Program that prints all arguments it recieves.
 * @argc: number of args
 * @argv: arrays of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int counter;
for (counter = 0; counter < argc; counter++)
printf("argv[%2d]: %s\n", counter, argv[counter]);
return (0);
}
