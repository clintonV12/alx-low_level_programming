#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}

return (nodes);
}
