#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: The head of the list.
 * Description: Write a function that reverses a listint_t linked list.
 *
 * Return: The pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *T;
listint_t *D;
T = NULL;
D = NULL;
while (*head != NULL)
{
D = (*head)->next;
(*head)->next = T;
T = *head;
*head = D;
}
*head = T;
return (*head);
}
