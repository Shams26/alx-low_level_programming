#include "lists.h"

/**
 * print_dlistint - prints the elements of a
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int turn;

	turn = 0;

	if (h == NULL)
		return (turn);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		turn++;
		h = h->next;
	}

	return (turn);
}