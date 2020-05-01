#include "lists.h"
/**
  * dlistint_len - list length
  * @h: head of list
  *
  * Return: number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
