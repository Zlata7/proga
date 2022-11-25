/**
    Генератор массива псевдослучайных чисел типа int.
    Производит n псевдослучайных чисел из диапазона left..right
    и заполняет ими массив arr
*/
#include <stdlib.h>

void rand_arr( int *arr, int n, int left, int right )
{
    int k;
    for( k = 0; k < n; k++ )
        arr[k] = rand() % (right - left + 1) + left;
    return;
}

