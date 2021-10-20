#include "main.h"
/**
 *  _pow_recursion - x^y
 * @x: The number to be raised
 * @y: The power
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
else
return (x * (_pow_recursion(x, y - 1)));
}
