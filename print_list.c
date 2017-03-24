#include "link.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print list
 * @head: head of the "link"ed list
 *
 * Return: nothing
 */

void print_list(link *head)
{
	while (head != NULL)
	{
		printf("%d ", head->value);
		head = head->next;
	}
}
