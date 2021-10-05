#include "main.h"

/**
 * _islower- Write a function that checks for lowercase character. 
 *
 * Return: Always (1)
 */
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
return (1);
else
return (0);    
}