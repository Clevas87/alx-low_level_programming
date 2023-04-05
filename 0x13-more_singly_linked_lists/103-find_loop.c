#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: The pointer to the head of the listint_t list.
 * Description: Write a function that finds the loop in a linked list.
 *
 * Return: If no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise, *hare;
if (head == NULL || head->next == NULL)
return (NULL);
tortoise = head->next;
hare = (head->next)->next;
while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}
return (tortoise);
}
tortoise = tortoise->next;
hare = (hare
