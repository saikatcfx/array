#include <stdio.h>
void merge(int a[], int f, int l);
void sort(int a[], int f, int mid, int l);
int main()
{
    int a[10] = {10, 13, 72, 26, 5, 7, -23, 56, 48, 32};
    int i;
    printf("unsorted arry\n");
    for (i = 0; i < 10; i++)
        
    {
        printf("%d\t", a[i]);
    }

     merge(a, 0, 9);

    printf("\nsorted arry\n");
    for (i = 0; i < 10; i++)
        
    {
        printf("%d\t", a[i]);
    }

   
}

void merge(int a[], int f, int l)
{

    int mid;
    if (f < l)
    {
        mid = (f + l) / 2;
        merge(a, f, mid);
        merge(a, mid + 1, l);

        sort(a, f, mid, l);
    }
}

void sort(int a[], int f, int mid, int l)
{

    int i = f, j = mid + 1, k = f;
    int b[10];

    while (i <= mid && j <= l)
    {
        if (a[i] < a[j])
        {

            b[k++] = a[i++];
            // b[k]=a[i];
            //
            // i++;
            // k++;
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    if(i>mid){
        while(j<=l){
            b[k++]=a[j++];
        }
    }
     if(j>l){
        while(i<=mid){
            b[k++]=a[i++];
        }
    }

    for(i=f;i<=l;i++){
        a[i]=b[i];
    }
    
}