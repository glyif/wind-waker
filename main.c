#include <stdio.h>
#include "wind-waker.h"

/**
 * main - entry point
 *
 * Return: int
 */

int main(void)
{
	int i;

	link *head;

	head = NULL;

	for (i = 0; i < 20; i++)
		add_node_end(&head, i);

	printf("Original List: ");
	print_list(head);
	putchar('\n');

	head = rev_list(head);

	printf("Reversed List: ");
	print_list(head);
	putchar('\n');

	return (0);
}
