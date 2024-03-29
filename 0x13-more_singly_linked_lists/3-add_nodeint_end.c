#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node at the
 * end of a listint_t list.
 * @head: The pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to have.
 * Description: Write a function that adds a new node at the
 * end of a listint_t list.
 *
 * Return: If the function fail -NULL, otherwise the
 * address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
