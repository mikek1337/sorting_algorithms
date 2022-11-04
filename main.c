#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {2, 15, 1, 5, 8,
                   9, 13, 15, 1, 11,
                   5, 16, 20, 2, 15,
                   19, 14, 16, 13, 8,
                   3, 9, 6, 20, 18,
                   2, 7, 18, 14, 16,
                   4, 20, 11, 14, 13,
                   4, 19, 7, 5, 3,
                   12, 6, 9, 17, 4,
                   14, 17, 3, 13, 6};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}