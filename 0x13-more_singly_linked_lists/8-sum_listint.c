#include "lists.h"

/**
 * sum_listint - Finds the sum of all the
 *               data of a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: If the list is empty - 0.
 *         Else - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
