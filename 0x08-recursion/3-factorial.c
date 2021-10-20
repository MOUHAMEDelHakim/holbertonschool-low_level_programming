#include "main.h"
/**
 * factorial- returns n!
 * @n :number to factorialise
 * Return: n!
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1 && n >= 0)
return (1);
else
return (n * factorial(n - 1));
}
