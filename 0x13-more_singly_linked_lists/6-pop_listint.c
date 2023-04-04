#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: The pointer to the head of the linked list.
 * Description: Write a function that deletes the head node of a
 * istint_t linked list, and returns the head node’s data (n).
 *
 * Return: The head node's data (n).
 *         otherwise 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;
tmp = *head;
if (tmp == NULL)
return (0);
*head = tmp->next;
n = tmp->n;
free(tmp);
return (n);
}
