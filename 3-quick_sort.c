#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm
 *
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quicky(array, 0, size - 1, size);

}

/**
 * quicky - Recursive QuickSort using Hoare partition scheme
 *
 * @array: Pointer to the array
 * @lf: Left index
 * @ri: Right index
 * @size: Full array size (for printing)
 *
 * Return: Nothing
 */
void quicky(int *array, size_t lf, size_t ri, size_t size)
{
int piov = array[ri], tmp;
size_t left = lf, right = ri;

if (lf >= ri)
return;

while (left <= right)
{
while (array[left] <= piov && left < right)
left++;

while (array[right] >= piov && left < right)
right--;


if (left <= right)
{
tmp = array[left];
array[left] = array[right];
array[right] = tmp;
print_array(array, size);

left++;
if (right > 0)
right--;
}
}

tmp = array[left];
array[left] = array[ri];
array[ri] = tmp;
print_array(array, size);

if (right > lf)
quicky(array, lf, left - 1, size);

if (left < ri)
quicky(array, left + 1, ri, size);

}

