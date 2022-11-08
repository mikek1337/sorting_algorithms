#include "sort.h"
#include <stdio.h>


/**
 * partition - function that partition the sorted element and unsorted
 * @array: array to be sorted
 * @low: the low end of the partition
 * @high: the high end of the partition
 * @size: size of the array
 * Return: pivot point of the partition
 */
int partition(int *array, int low, int high, size_t size)
{
	 int j;
	 int temp = 0;
	 int pivot = array[high];
	 int start = (low - 1);
	for (j = low; j < high ; j++)
	{
		if (array[j] < pivot)
		{
			start++;
			if (array[start] != array[j])
			{
				temp = array[start];
				array[start] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[start - 1] != array[high])
	{
		temp = array[start + 1];
		array[start + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (start + 1);
}

/**
 * sort - actual sort code
 * @array: array to be sorted
 * @l: low end
 * @h: high end
 * @size: size of the array
 */
void sort(int *array, int l, int h, size_t size)
{
	 int pivot;
	if (l < h)
	{
		pivot = partition(array, l, h, size);
		sort(array, l, pivot - 1, size);
		sort(array, pivot + 1, h, size);
	}
}



/**
 * quick_sort - quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, 0, size - 1, size);
}
