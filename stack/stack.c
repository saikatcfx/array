#include <stdio.h>
#include <stdlib.h>
#define max 5

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
        printf("menu\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n enter your choice:-");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
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

void peek() // top element find 
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }

    else
    {
        printf("top elements is: %d\n", stack[top]);
    }
}

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