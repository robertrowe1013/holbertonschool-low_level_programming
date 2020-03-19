#include "lists.h"
/**
  * print_list - print list
  * @h: head
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	int c = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	
	return (c);
}
