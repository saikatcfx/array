#include <stdio.h>
#include<stdlib.h>
// wap to store roll number and marks obtained by 4 students side by side in matrix;
// find the sum of given matrix ;
#define max 5
 int top=-1;
 int stack[max];
 void push();
 void pop();
 void peek();
 void display();

void main()
{
       int choice ;
       do{
           printf("menu\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
           scanf("%d",&choice);
           switch(choice){
               case 1: push();
                       break;

               case 2: pop();
                       break;
               
               case 3: peek();
                       break;

               case 4: display();
                       break;

               case 5: exit(0);
                       break;

               default : printf("invaild choice");
           }
       }while(1);
    
}

void push(){
     if(top==max-1){
          printf("stack is overflow");

     }
     else {
          printf("enter any no:");
          scanf("%d",&stack[top]);
          top++;
     }
  }

void pop(){
     if(top==-1){
          printf("stcak is underflow");
     }
     else {
          printf("item is deleted %d",stack[top]);
          top--;
     }
}
void peek(){
     if(top==-1)
     {
          printf("stack is empty");
     }
     else{
          printf("top elemeent is %d",stack[top]);
     }
}
void display(){
     int i;

     for(i=top;i>=0;i--){
          printf("%d",stack[top]);
     }
}

// wap to find out max and min number :
/*
     int r, c;
     int m1[3][3], sum = 0, m2 = 0, m3 = 0;
     // printf("ente matrix value :");
     for (r = 0; r < 3; r++)
     {
          for (c = 0; c < 3; c++)
          {
               printf("ente matrix value :");
               scanf("%d", &m1[r][c]);
          }
     }
     printf("out put :\n");

     for (r = 0; r < 3; r++)
     {
          for (c = 0; c < 3; c++)
          {

               printf("%d\t", m1[r][c]);
          }
          printf("\n");
     }

     for (r = 0; r < 3; r++)
     {
          for (c = 0; c < 3; c++)
          {
               if (m1[r][c] > m2)
               {
                    m2 = m1[r][c];
               }
                else if(m3<m1[r][c])               
                    m3 = m1[r][c];
               }
          }
          
     }

     printf("%d\n", m2);
          printf("%d\n", m3);
*/