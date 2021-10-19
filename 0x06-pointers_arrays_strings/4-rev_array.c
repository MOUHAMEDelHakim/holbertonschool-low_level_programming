#include "main.h"
/**
 * reverse_array- reverse an array of string
 * @a :array to reverse
 * @n :lenth of the array
 */
void reverse_array(int *a, int n)
{
int i, x, j = n;

for (j--, i = 0; i < n / 2; i++, j--)
{
x = a[i];
a[i] = a[j];
a[j] = x;
}
}
