#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * size_t print_listint - a function that prints all the elements of a list.
 * @h: pointer.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
return (a);
}
