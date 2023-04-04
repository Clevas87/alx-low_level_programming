#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts a new node at a
 * given position.
 * @head: The pointer to the head of the list.
 * @idx: The index of the list where the new node will bei
 * added (begging from 0).
 * @n: The value of the new nodde to be added.
 * Description: Write a function that inserts a new node at a given position.
 *  Return: The pointer to the new node.
 *          otherwise NULL - if the function fail.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *tmp = *head;
unsigned int node;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = tmp;
*head = new;
return (new);
}
for (node = 0; node < (idx - 1); node++)
{
if (tmp == NULL || tmp->next == NULL)
return (NULL);
tmp = tmp->next;
}
new->next = tmp->next;
tmp->next = new;
return (new);
}
