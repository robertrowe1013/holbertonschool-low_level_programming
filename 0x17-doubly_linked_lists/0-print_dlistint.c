#include "lists.h"
/**
  * print_dlistint - print list
  * @h: head of list
  *
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
    int c = 0;

    while (h != NULL)
    {
        c++;
        printf("%d\n", h->n);
        h = h->next;
    }
    return (c);
}
