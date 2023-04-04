#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * index index of a listint_t linked list.
 * @head: The pointer to the head of the list.
 * @index: The index of the node to be deleted (beginning from 0).
 * Description: Write a function that deletes the node at index
 * index of a listint_t linked list.
 *
 * Return: (1) if the function passes.
 *         (-1) if the function fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *copy = *head;
unsigned int node;
if (copy == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (copy->next == NULL)
return (-1);
copy = copy->next;
}
temp = copy->next;
copy->next = temp->next;
free(temp);
return (1);
}
