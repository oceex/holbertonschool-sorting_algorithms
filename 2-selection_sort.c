#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 *
 * @array: Pointer to the array of integers to sort
 * @size: Number of elements in the array
 *
 * Description: This function implements the Selection sort algorithm.
 *              It repeatedly selects the smallest element from the
 *              unsorted portion of the array and swaps it with the
 *              first unsorted element. The function prints the array
 *              after each swap, as required by the project tasks.
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i = 0, j = 0, k = 0;
int tmp = 0;
for (; i < size; i++)
{
k = i;
for (; j < size; j++)
if (array[k] > array[j])
k = j;

tmp = array[i];
array[i] = array[k];
array[k] = tmp;
if (array[i] != array[k])
print_array(array, size);
}
}
