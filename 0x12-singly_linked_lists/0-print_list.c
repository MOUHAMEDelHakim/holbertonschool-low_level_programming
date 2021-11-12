#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: head of the list
 * Return: number of items
*/

size_t print_list(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
	if (h->str != NULL)
	printf("[%d] %s\n", h->len, h->str);
	else if (h->str == NULL)
	printf("[0] (nil)\n");
	i++;
	h = h->next;
}
return (i);
}
