#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - function that search for a value in an array
 * to integrs using the linear search algo.
 *@array: a pointer to the first element of array to search in.
 *@size: the number of elements in array
 *@value: the value to search.
 *Return: If value is not present in array or if array is NULL, your function must return -1 
 */
int linear_search(int *array, size_t size, int value)

{
    size_t i;
    
    if (array == NULL)
    {
            return (-1);
    }
    for (i = 0; i < size; i++)
    {
        printf("value checked array [%li] = [%i]\n" , i, array[i]);
        if (array[i] == value)
                return (i);
    }
    return(-1);
}
