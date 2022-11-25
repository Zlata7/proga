#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    {
        printf("\tСоздать и напечатать примитивную матрицу? (Y/N):" );
        void create_mtr();  /// Создаёт и печатает двумерный массив,
        int c = getch();
        if(c=='y' || c=='Y' || c=='У' || c=='у')
            create_mtr();   /// заполненный по строкам числами натурального ряда
            else printf("\n\n");
    }


    int N;
    printf("\n\tТестируется функция, производящая массив,"
           "\n\tсодержащий все значения из заданного массива"
           "\n\tc дубликатами вхождений чётных чисел."
           "\n\n\tВведите размер исходного массива: ");
    scanf("%d", &N);

/// Заполнение и печать исходного массива

    int arr[N];
    void rand_arr( int*, int, int, int );
    rand_arr(arr, N, 11, 101);

    printf("\n\n\tПроизведён массив\n\n");
    int j;
    for(j = 0; j < N; j++)
        printf("% 4d", arr[j]);
    printf("\n");

/**     Тестирование функции dupl_even      */

    int *dupl_even(int*, int, int*);        /// См. файл dupl_even.c
    int Nr;                                 /// Размер результирующего массива

    int *resarr = dupl_even(arr, N, &Nr);   /// Создание целевого массива

    printf("\n\n\tПолучен массив\n\n");

    for(j = 0; j < Nr; j++)
        printf("% 4d", resarr[j]);
    printf("\n");

    free(resarr);/** Здесь это не обязательно, т.к. программа закончилась.
                     Это рефлекс опытного человека:
                     "Динамический массив больше не нужен. Убей его!"
                 */
    return 0;
}
