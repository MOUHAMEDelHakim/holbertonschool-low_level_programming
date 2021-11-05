#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array to search
 * @size: number of elements in array
 * @cmp: function pointer that take an int.
 * Return: index of element or it be -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
