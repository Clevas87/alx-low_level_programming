#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: The pointer to the address of the head of the
 * listint_t list.
 * Description: Write a function that frees a listint_t list.
 *
 * Return: The head to NULL if it passess.
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
return;
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
