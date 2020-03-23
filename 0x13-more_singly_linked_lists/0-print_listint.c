#include "lists.h"
/**
  * print_listint - print list
  * @h: head
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
