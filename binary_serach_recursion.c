#include <stdio.h>
int search(int arr[], int target, int f, int l)
{
     int mid;
    if (f <= l)
    {
        
        mid = (f + l) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            return search(arr, target, mid + 1, l);
        }
        else if (target < arr[mid])
        {
            return search(arr, target,f,mid-1);
        }
    }

    else
    {
        return -1;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target, p=0;
    printf("enter  any no:");
    scanf("%d", &target);
    p = search(arr, target, 0, 9);
    if(p>=0){
        printf("item found at %d index",p);
    }
    else {
         printf("item found not found");
    }
    return 0;
}
