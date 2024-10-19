#include<stdio.h>
// binary search arry in c;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int left=0;
    int right=9;
    int search_item ,mid=0,flag=0;
    printf("enter any search value :");
    scanf("%d",&search_item);
     while (left<=right)
     {
           mid=(left+right)/2;
           if(search_item== arr[mid]){
               printf("item is found  and  position is %d:",mid+1);
               flag=1;
               break;
           }
           else if(mid<right){
                 left=mid+1;  
           }
           else {
             right=mid-1;
           }

     }
     if(flag==0){
           printf("item are not found ");
     }
     
      return 0;

}