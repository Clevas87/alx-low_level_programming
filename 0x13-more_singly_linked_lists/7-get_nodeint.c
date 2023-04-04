#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - A function that returns the nth node of
 * a listint_t linked list.
 * @head: The pointer to the head of the linked list.
 * @index: The index of the node to find (indices begging from 0).
 * Descrition: Write a function that returns the nth node of a
 * listint_t linked list.
 *
 * Return: The pointer to the desired node.
 *         otherwise NULL - if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t x;
for (x = 0; (x < index) && (head->next); x++)
head = head->next;
if (x < index)
return (NULL);
return (head);
}
