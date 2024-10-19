#include <stdio.h>
#include <stdlib.h>
#define max 5

int queue[max];
int rear = 0;
int front = 0;

void enque()
{

    if (rear < max)
    {
        printf("enter any  number:");
        scanf("%d",& queue[rear]);

        rear++;
    }

    else
    {
        printf("queue is over flow");
    }
}

void denque()
{

    int i;
    printf("delted item is :%d", queue[front]);
    for (i = 0; i < max - 1; i++)
    {
        queue[i] = queue[i + 1];
    }
    rear--;
}
void display()
{
    int i;

    if (rear != 0)
    {
      for(i=front;i<rear;i++){
        printf("%d\t",queue[i]);   
    }
   
   }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n-:menu:-\n1.enque\n2.denque\n3.Display\n4.Exit\n Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enque();
            break;
        case 2:
            denque();
            break;
        case 3:
            display();
            break;

        case 4:
            exit(0);
        default:
            printf("Incorrect choice \n");
        }
    }
}

/*
int stack[max]; // abstract data structure
int top = -1;

void push();
void pop();
void peek();
void display();

int main()
{
    int choice; // user er kach thaka number choice naber jono variable;
    do
    {
        printf("menu\n1. for push\n2. for pop\n3. for display\n4.exit\n");
        printf("enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
     //    case 3:
     //        peek();
     //        break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("invalid choice ");
        }

    } while (1);

    return 0;
}

void push()
{
    if (top == max - 1) // top=-1; // max=5  4==4
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        printf("enter any no:");
        scanf("%d", &stack[top]);//1 ,2,3,4, // stack array[1,2,3,4]
    }
}

void pop() // del kar
{

    if (top == -1) // top=4 4==-1
    {
        printf("stack under flow\n");
    }
    else
    {
        printf("item deleted : %d\n", stack[top]);  //pf stack array[1,2,3,'4']
        top--;
    }
}

// void peek() // top element find
// {
//     if (top == -1)
//     {
//         printf("stack is empty\n");
//     }

//     else
//     {
//         printf("top elements is: %d\n", stack[top]);
//     }
// }

void display()
{
    int i;
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[top]);
        }
    }
}



*/

/*  queue
#include <stdio.h>
#include<stdlib.h>
# define max 5
void insertion();
void delation();
void display();
int queue[max];
int Rear = - 1;
int Front = - 1;
int main()
{
    int ch;
    while (1)
    {
        printf("1.insertion Operation\n");
        printf("2.delation Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
         printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            insertion();
            break;
            case 2:
            delation();
            break;
            case 3:
              display();
            break;

            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        }
    }
}

void insertion()
{

    if (Rear == max- 1)
       printf("Overflow \n");
    else
    {
        Rear++;


        printf("Element to be inserted in the Queue:\n");
        scanf("%d", &queue[Rear]);
    }
        if(Front==-1){
          Front++;
        }

}

void delation()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("queue is underflow\n");

    }
    else
    {
        printf("Element deleted from the Queue: %d\n", queue[Front]);
        Front ++;
    }
}

void display()
{

    if (Front == - 1 || Front>Rear)
        printf("Empty Queue \n");
    else
    {

        for (int i = Front; i <=Rear; i++)
            printf("%d\n ",queue[i]);

    }
}


*/

/*

#include<stdio.h>
#include<stdlib.h>
int main(){
     int n,*ptr,i,*t;
     printf("enter how many value:\n");
     scanf("%d",&n);
     ptr=(int *)calloc(n,sizeof(int));
     t=ptr;
     for(i=0;i<n;i++){
      printf("enter any no:\n");
      scanf("%d",ptr);
      ptr++;
     }
       for(i=0;i<n;i++){
      printf("%d\n",*t);
      t++;
     }


}

*/