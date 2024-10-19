#include <stdio.h>
#include <stdlib.h>
#define max 5

void enque();
void denque();
void display();
void count();


int queue[max];

int rear = 0;
int front = 0;
int main()
{
    int ch;
    while (1)
    {
        printf("\n-:menu:-\n1.enque\n2.denque\n3.Display\n4.Exit\n Enter your choice of operations : ");
        scanf("%d",&ch);
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

void enque()
{

    if (rear<max)
    {

        printf("enter any number");
        scanf("%d", &queue[rear]);
        rear++;
    }
    else 
    {
        printf("quueu is overflow");
    }
}
void denque()
{
    int i;
    printf("delted item is%d",queue[front]);
    for(i=0;i<rear-1;i++){
        queue[i]=queue[i+1];
    }

    rear--;

    
}

void display(){
    
    int i;
    if(rear!=0){
    for(i=front;i<rear;i++){
        printf("%d\t",queue[i]);
    }

    }
    else {
        printf("queue is empty\n");
    }
    

}
void count(){
    printf("total no of elements is:%d\n",rear);
}