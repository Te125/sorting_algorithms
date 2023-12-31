#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

int main(void);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void bub_swap(int *array, size_t id, size_t id1, size_t size);
void insertion_sort_list(listint_t **list);
void insert_node(listint_t **list, listint_t *node);
void selection_sort(int *array, size_t size);
void swap(int *array, size_t id, size_t id1);
void quick_sort(int *array, size_t size);
int lomuto_partition(int *array, int fst, int snd, size_t size);
void quicksort(int *array, int fst, int snd, size_t size);

#endif
