#include "main.h"
/**
 * _sqrt - Finds the natural square root of an inputted number.
 * @nm: The number to find the square root of.
 * @r: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int _sqrt(int nm, int r)
{
if ((r * r) == nm)
return (r);
if (r == nm / 2)
return (-1);
return (_sqrt(nm, r + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
int r = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (_sqrt(n, r));
}
