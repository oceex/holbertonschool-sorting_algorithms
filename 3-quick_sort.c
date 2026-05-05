#include "sort.h"
void quicky(int *array, size_t lf, size_t ri, size_t size);
size_t lomuto(int *array, size_t lf, size_t ri, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm (Lomuto)
 *
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quicky(array, 0, size - 1, size);
}

/**
 * quicky - Recursive QuickSort using Lomuto partition scheme
 *
 * @array: Pointer to the array
 * @lf: Left index
 * @ri: Right index
 * @size: Full array size (for printing)
 */
void quicky(int *array, size_t lf, size_t ri, size_t size)
{
size_t pi;

if (lf >= ri)
return;

pi = lomuto(array, lf, ri, size);

if (pi > 0)
quicky(array, lf, pi - 1, size);

quicky(array, pi + 1, ri, size);
}

/**
 * lomuto - Lomuto partition scheme
 *
 * @array: Pointer to the array
 * @lf: Left index
 * @ri: Right index (pivot position)
 * @size: Full array size (for printing)
 *
 * Return: Final pivot index
 */
size_t lomuto(int *array, size_t lf, size_t ri, size_t size)
{
int piov = array[ri], tmp;
size_t i = lf, j;

for (j = lf; j < ri; j++)
{
if (array[j] < piov)
{
if (array[i] != array[j])
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
}
i++;
}
}

if (array[i] != array[ri])
{
tmp = array[i];
array[i] = array[ri];
array[ri] = tmp;
print_array(array, size);
}

return (i);
}
