#include "lists.h"
#include <stdio.h>
/**
  * print_listint_safe -prints elementsof linked list
  * @head: pointer to the head of the list
  *
  * Return: addredd of the head
  */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}

	}
	return (0);
}
