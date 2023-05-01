#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cur = h;
	size_t num = 0;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		num += 1;
		cur = cur->next;
	}
	return (num);
}
