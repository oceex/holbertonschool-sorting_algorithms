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


size_t quicky(int *array, size_t lf, size_t ri, size_t size)
{
int piov = array[ri], tmp;
size_t i = lf, j;

for (j = lf; j < ri; j++)
{
if (array[j] < piov)
{
if (i != j)
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
}
i++;
}
}

if (i != ri)
{
tmp = array[i];
array[i] = array[ri];
array[ri] = tmp;
print_array(array, size);
}

return (i);
}
