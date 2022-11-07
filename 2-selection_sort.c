#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: the array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	 size_t i, j;
	 size_t currMin;
	 int temp;
	for (i = 0; i < size; i++)
	{
		currMin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[currMin])
			{
				currMin = j;
			}

		}
		if (currMin != i)
		{
			temp = array[i];
			array[i] = array[currMin];
			array[currMin] = temp;
			print_array(array, size);
		}
	}
}
