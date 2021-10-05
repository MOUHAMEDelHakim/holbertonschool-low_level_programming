
#include "main.h"
/**
 * _abs - compute the absolute value of a given number
 * @i: integer
 *
 * Return: absolute value
 */
int _abs(int i)
{
if (i < 0)
i = -i;
else if (i >= 0)
i = i;
return (i);
}
