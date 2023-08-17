#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of the list
 * @index: index of the node (from 0) to search for
 * Return: the nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *Frst;
    size = 0;
	if (head == NULL)
	return (NULL);

	Frst = head;
	while (Frst)
	{
	if (index == size)
	return (Frst);
	size++;
	Frst = Frst->next;
	}
	return (NULL);
}
