#include <stdio.h>
#include <stdlib.h>

int partition(int a[], int lb, int ub);
void quicksort(int a[], int lb, int ub);
void swap(int *p, int *t);
void main()
{
    int a[10] = {16, 9, 11, 2, -1, 28, 92, 75, -100, 24};

    int lb = 0, ub = 9, i;
    printf("unsorted array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    quicksort(a, lb, ub);

    printf("\nsorted array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    
}
int partition(int a[], int lb, int ub)
{
    int pivot, start, end;
    pivot = a[lb];
    start = lb;
    end = ub;
    while (start < end)                    //{16, 9, 11, 2, -1, 2s8, 92, 75, -100, 24};

    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&a[start], &a[end]);
        }
    }
    swap(&a[lb],&a[end]);
    return end;
}

void quicksort(int a[], int lb, int ub){
    int mid;
    if(lb<ub){
        mid=partition(a,lb,ub);
        quicksort(a,lb,mid-1);
        quicksort(a,mid+1,ub);

    }
}

void swap(int *p, int *t){
     int temp;
     temp=*p;
     *p=*t;
     *t=temp;
}