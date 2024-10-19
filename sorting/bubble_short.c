#include <stdio.h>
#include <conio.h>
// wap to bubble sort program;

#define size 5
int main()
{
    int i, j, temp, flag;
    int arr[size] = {8, 2, 5, 7, 1};

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            flag = 0;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}