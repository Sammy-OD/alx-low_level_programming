#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t* h)
{
  struct listint_t* current = h;
	size_t num = 0;

	while (current)
	{
		printf("%d\n", current->n);
		num++;
		current = current->next;
	}

	return (num);
}
