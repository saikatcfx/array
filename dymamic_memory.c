#include<stdio.h>
#include<stdlib.h>
int main(){

   int n,*p,i;
   printf("enter number  of element:");
   scanf("%d",&n);//5
   p=(int *)malloc(sizeof(int)*n); //5*5
   // p=(int *)calloc(sizeof(int)*n);

   for(i=0;i<n;i++){
     printf("enter any no.");
     scanf("%d",(p+i));
   }
    for(i=0;i<n;i++){
     
     printf("%d\n",*(p+i));
   }


    return 0;
}