#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    {
        printf("\t������� � ���������� ����������� �������? (Y/N):" );
        void create_mtr();  /// ������ � �������� ��������� ������,
        int c = getch();
        if(c=='y' || c=='Y' || c=='�' || c=='�')
            create_mtr();   /// ����������� �� ������� ������� ������������ ����
            else printf("\n\n");
    }


    int N;
    printf("\n\t����������� �������, ������������ ������,"
           "\n\t���������� ��� �������� �� ��������� �������"
           "\n\tc ����������� ��������� ������ �����."
           "\n\n\t������� ������ ��������� �������: ");
    scanf("%d", &N);

/// ���������� � ������ ��������� �������

    int arr[N];
    void rand_arr( int*, int, int, int );
    rand_arr(arr, N, 11, 101);

    printf("\n\n\t��������� ������\n\n");
    int j;
    for(j = 0; j < N; j++)
        printf("% 4d", arr[j]);
    printf("\n");

/**     ������������ ������� dupl_even      */

    int *dupl_even(int*, int, int*);        /// ��. ���� dupl_even.c
    int Nr;                                 /// ������ ��������������� �������

    int *resarr = dupl_even(arr, N, &Nr);   /// �������� �������� �������

    printf("\n\n\t������� ������\n\n");

    for(j = 0; j < Nr; j++)
        printf("% 4d", resarr[j]);
    printf("\n");

    free(resarr);/** ����� ��� �� �����������, �.�. ��������� �����������.
                     ��� ������� �������� ��������:
                     "������������ ������ ������ �� �����. ���� ���!"
                 */
    return 0;
}
