#include <stdio.h>
void shellsort(int a[], int n);

void main()
{

    int a[10] = {23, 1, 34, 5, 8, 12, 10, -5, 22, 11};

    int i;
    printf("unsorted array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    shellsort(a, 10);

    printf("\nshorted array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
}
void shellsort(int a[], int n)
{
    int gap, j, i, temp;
    for (gap = n / 2; gap >= 1; gap = gap / 2)
    {

        for (j = gap; j < n; j++)
        {
            for (i = j - gap; i >= 0; i = i - gap)
            {
                if (a[i + gap] > a[i]) // j>i
                {
                    break;
                }
                else
                {
                    temp = a[i + gap];
                    a[i + gap] = a[i];
                    a[i] = temp;
                }
            }
        }
    }
}