#include "sort.h"

/**
 * swap_nodes - swaps two nodes in a doubly linked list
 * @list: pointer to the head of the list
 * @node1: first node
 * @node2: second node (must be right after node1)
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	node1->next = node2->next;
	if (node2->next)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	if (node1->prev)
		node1->prev->next = node2;
	node2->next = node1;
	node1->prev = node2;
	if (!node2->prev)
		*list = node2;
}

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !*list || !(*list)->next)
		return;
	current = (*list)->next;
	while (current)
	{
		tmp = current->next;
		while (current->prev && current->prev->n > current->n)
		{
			swap_nodes(list, current->prev, current);
			print_list(*list);
		}
		current = tmp;
	}
}
