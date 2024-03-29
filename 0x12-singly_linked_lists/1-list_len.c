#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Prints length of list_t linked list.
 * @h: The linked list.
 * Return: The number of elements (length) of linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
