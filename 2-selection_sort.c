#include "sort.h"

/**
 * swap - swaps two elements in an array
 * @array: array to be sorted
 * @id: first element to swap
 * @id1: second element to swap
 */
void swap(int *array, size_t id, size_t id1)
{
	int a = 0;

	a = array[id];
	array[id] = array[id1];
	array[id1] = a;
}

/**
 * selection_sort - sorts array of integers with Selection sort
 * @array: array to be sorted
 * @size: elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t sp, joy, index;

	for (sp = 0; sp < size - 1; sp++)
	{
		index = sp;
		for (joy = sp + 1; joy < size; joy++)
		{
			if (array[joy] < array[index])
			{
				index = joy;
			}
		}
		if (index != sp)
		{
			swap(array, sp, index);
			print_array(array, size);
		}
	}
}
