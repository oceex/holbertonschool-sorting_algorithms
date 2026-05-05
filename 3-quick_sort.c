#include "sort.h"

void quick_sort(int *array, size_t size)
{
int i = -1, j = 0;

while (i < j)
quicky(array, i, j, size);

}
void quicky(int *array, int i, int j, int size)
{
int prv = size - 1, tmp = 0;
while (j < size - 1)
{
if (array[j] < array[prv])
{
i++;
tmp = array[j];
array[j] = array[i];
array[i] = tmp;
}
j++;
}
quicky(array, i - 1, j, j - i + 1);
}
