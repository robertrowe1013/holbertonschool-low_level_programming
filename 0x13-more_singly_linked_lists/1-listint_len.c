#include "lists.h"
/**
 * lisintt_len - list length
 * @h: head
 *
 * Return: list count
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
