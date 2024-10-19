#include <stdio.h>
// insertion short
// write a insertion sort program;
#define size 5
int main()
{

    int arr[size] = {10, 1, 5, -2, 9};
    int key, i, j;

    for (i = 1; i < size - 1; i++)
    {
        key = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (key < arr[j])//1<10
            {
                arr[j + 1] = arr[j];//  1=10
            }
            else
            {
                break;
            }
            
        }
         arr[j + 1] = key; //1=10
    }

    printf("shorted array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
// for(j=i-1;j>=0;j--)
//  for(j=0;j<i-1;j++)