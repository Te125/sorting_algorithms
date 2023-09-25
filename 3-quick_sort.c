#include "sort.h"

/**
 * lomuto_partition - implements Lomuto partition scheme
 * @array: array to be sorted
 * @fst: low index
 * @snd: high index
 * @size: elements in the array
 *
 * Return: new pivot index
 */
int lomuto_partition(int *array, int fst, int snd, size_t size)
{
	int pi = array[snd];
	int n = fst - 1;
	int m, j;

	for (j = fst; j <= snd - 1; j++)
	{
		if (array[j] <= pi)
		{
			n++;
			m = array[n];
			array[n] = array[j];
			array[j] = m;
			if (n != j)
			{
				print_array(array, size);
			}
		}
	}
	m = array[n + 1];
	array[n + 1] = array[snd];
	array[snd] = m;
	if (n + 1 != snd)
	{
		print_array(array, size);
	}

	return (n + 1);
}

/**
 * quicksort - function to sort an array using Quick sort
 * @array: array to be sorted
 * @fst: low index
 * @snd: high index
 * @size: elements in the array
 */
void quicksort(int *array, int fst, int snd, size_t size)
{
	int p = 0;

	if (fst < snd)
	{
		p = lomuto_partition(array, fst, snd, size);
		quicksort(array, fst, p - 1, size);
		quicksort(array, p + 1, snd, size);
	}
}

/**
 * quick_sort - Sorts array of integers using the Quick sort
 * @array: array to be sorted
 * @size: elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	quicksort(array, 0, size - 1, size);
}
