#include "sort.h"

void quick_sort(int *array, size_t size)
{

quicky(array, 0, size - 1);

}

void quicky(int *array, size_t lf, size_t ri)
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
}

tmp = array[left];
array[left] = array[right];
array[right] = tmp;

quicky(array, lf, left - 1);
quicky(array, left + 1, ri);

}

