#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistintlen - returnts the nmb of elements
 * @h: the pointer.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t a;
    a = 0;
    while (h !=NULL)
    {
        a = a + 1;
        h = h->next;
    }
    return (a);
}
