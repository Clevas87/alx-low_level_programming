#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - A function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: The pointer of the head of the list.
 * Description: Write a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * Return: The sum of all the data (n).
 *         otherwise 0 - if the list is empty.
 */

int sum_listint(listint_t *head)
{
int add;
add = 0;
while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
