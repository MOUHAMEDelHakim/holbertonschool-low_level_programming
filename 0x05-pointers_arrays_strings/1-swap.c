#include "main.h"
/**
 * swap_int - swapping code
 * @a: int
 * @b:int
 */
void swap_int(int *a, int *b)
{
*a = a + b;
*b = a - b;
*a = a - b;
}
