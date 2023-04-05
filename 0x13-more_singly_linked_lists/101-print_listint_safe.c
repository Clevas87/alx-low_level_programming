#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listp - A function that prints a listint_t linked list.
 * @head: The head of the list.
 * Description: Write a function that prints a listint_t linked list.
 *
 * Return: Nothing.
 */

void free_listp(listp_t **head)
{
listp_t *temp;
listp_t *crnt;
if (head != NULL)
{
crnt = *head;
while ((temp = crnt) != NULL)
{
crnt = crnt->next;
free(temp);
}
*head = NULL;
}
}

/**
 * print_listint_safe - A function that prints a linked list.
 * @head: The head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nnodes = 0;
listp_t *hptr, *new, *add;
hptr = NULL;
while (head != NULL)
{
new = malloc(sizeof(listp_t));
if (new == NULL)
exit(98);
new = (void *)head;
new->next = hptr;
hptr = new;
add = hptr;
while (add->next != NULL)
{
add = add->next;
if (head == add->p)
{
printf("->[%p] %d\n", (void *)head, head->n);
free_listp(&hptr);
return (nnodes);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nnodes++;
}
free_listp(&hptr);
return (nnodes);
}
