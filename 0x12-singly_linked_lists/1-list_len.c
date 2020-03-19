#include "lists.h"
/**
 * list_len - list length
 * @h: head
 *
 * Return: list count
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
