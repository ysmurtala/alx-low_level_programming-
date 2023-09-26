#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data in a listint_t list
 * @head: first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		a += temp->n;
		temp = temp->next;
	}

	return (a);
}

