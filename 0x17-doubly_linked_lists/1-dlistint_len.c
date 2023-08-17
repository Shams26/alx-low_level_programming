#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a doubly linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int turn;
	turn = 0;

	if (h == NULL)
		return (turn);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		turn++;
		h = h->next;
	}

	return (turn);
}
