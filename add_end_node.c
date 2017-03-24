#include "link.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of the list
 * @head: address of the pointer of the head of the list
 * @s: integer to put as value
 *
 * Return: nothing
 */

void add_node_end(link **head, int s)
{
	link *tmp;
	link *new;

	new = malloc(sizeof(link));

	if (new == NULL)
		return;

	if (*head != NULL)
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new;
	}
	else
	{
		*head = new;
	}

	new->value = s;
	new->next = NULL;
}
