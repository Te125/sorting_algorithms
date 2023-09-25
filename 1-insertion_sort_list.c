#include "sort.h"

/**
 * insert_node - Inserts a node into the sorted doubly linked list
 * @list: A pointer to head of the list
 * @node: node to insert
 */
void insert_node(listint_t **list, listint_t *node)
{
	listint_t *fst;

	if (*list == NULL || (*list)->n >= node->n)
	{
		node->next = *list;
		node->prev = NULL;
		if (*list != NULL)
		{
			(*list)->prev = node;
		}
		*list = node;
		return;
	}
	fst = *list;
	while (fst->next != NULL && fst->next->n < node->n)
        fst = fst->next;

	node->next = fst->next;
	if (fst->next != NULL)
	{
		fst->next->prev = node;
	}
	fst->next = node;
	node->prev = fst;
}

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 *    using the Insertion sort
 *
 * @list: A pointer to head of the list
 */
void insertion_sort_list(listint_t **list)
{
	int sp = 0;
	listint_t *fst, *n_fst;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	while (1)
	{
		fst = (*list)->next;
		while (fst)
		{
			n_fst = fst->next;
			if (fst->n < fst->prev->n)
			{
				insert_node(list, fst);
				sp = 1;
			}
			fst = n_fst;
		}
		print_list(*list);
		if (!sp)
		{
			break;
		}
	}
}
