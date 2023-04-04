#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list.
 * @head: The pointer to the head of the listint_t to be freed.
 * Description: Write a function that frees a listint_t list.
 *
 * Return: Always 0 (Success).
 */

void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
