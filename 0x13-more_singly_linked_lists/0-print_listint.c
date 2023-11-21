#include "main.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to the list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	struct listint_s *p;

	p = NULL;
	p = h;

	while (p != NULL)
	{
		count++;
		p = p->n;
		printf("%d", p);
		h = h->next;
	}
	return (count);
}
