#include "sort.h"

/**
 * bub_swap - Swaps two elements in an array
 * @array: array to be sorted
 * @id: first element to swap
 * @id1: second element to swap
 * @size: size of array
 *
 */
void bub_swap(int *array, size_t id, size_t id1, size_t size)
{
	int a = 0;

	a = array[id];
	array[id] = array[id1];
	array[id1] = a;
	print_array(array, size);
}

/**
 * bubble_sort - Sorts an array of integers using the Bubble sort
 * @array: array to be sorted
 * @size: Number of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	int sp = 0;
	size_t fst, snd;

	for (fst = 0; fst < size - 1; fst++)
	{
		for (snd = 0; snd < size - fst - 1; snd++)
		{
			if (array[snd] > array[snd + 1])
			{
				bub_swap(array, snd, snd + 1, size);
				sp = 1;
			}
		}
		if (sp == 0)
		{
			break;
		}
	}
}
