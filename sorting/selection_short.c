#include <stdio.h>
#define size 5
// wap to short an srrya using srl
// wap selection sort program ;

int main()
{
    int arr[size] = {10, -4, 7, 1, 5};
    int i, j, min, temp;
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])//10>-4 // 10>7
            {
                min = j;// min=-4;
            }
        }
        if(min!=i){
             temp=arr[min];
             arr[min]=arr[i];
             arr[i]=temp;
        }
    }

    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}