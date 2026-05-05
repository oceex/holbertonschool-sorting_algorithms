#include "sort.h"

void quick_sort(int *array, size_t size)
{

quicky(array, 0, size - 1, size);

}

void quicky(int *array, size_t lf, size_t ri, size_t size)
{
int piov = array[ri], tmp;
size_t left = lf, right = ri;

if (lf >= ri)
return;

while (left < right)
{
while (array[left] <= piov && left < right)
left++;

while (array[right] >= piov && left < right)
right--;

tmp = array[left];
array[left] = array[right];
array[right] = tmp;
if (left != right)
print_array(array, size);
}

tmp = array[left];
array[left] = array[right];
array[right] = tmp;
if (left != right)
print_array(array, size);
quicky(array, lf, left - 1, size);
quicky(array, left + 1, ri, size);

}

