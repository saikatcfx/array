#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;

} *head, *head2, *temp, *temp2;

int main()
{
    int i;
    int p=4;
    head = NULL;
    head = malloc(sizeof(struct node));
    printf("enter any for 1st number\n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp=head;

    head2 = NULL;
    for (i = 0; i < 4; i++)
    {

        head2 = malloc(sizeof(struct node));
        printf("enter any number:");
        scanf("%d", &head2->data);
        head2->next = NULL;
        temp->next = head2;
        temp = temp->next;
    }
    temp = head;

    while (temp != NULL)
    {
        //temp = temp->next;
        printf("%d\t", temp->data);
        temp = temp->next;
    }

     head2 = malloc(sizeof(struct node));
        printf("\nenter any for last number:");
        scanf("%d", &head2->data);
         head2->next = NULL;
        
        temp=head;
    while (p!=1)
    {
        //temp = temp->next;
        
        temp = temp->next;
    }
    head2=temp->next;
       temp->next=head2;
     while (temp != NULL)
    {
        //temp = temp->next;
        printf("%d\t", temp->data);
        temp = temp->next;
    }



  

        
}

//  head2 = malloc(sizeof(struct node));
//     printf("\nenter the number for before last node");
//     scanf("%d",&head2->data);
//     head2->next=NULL;
//     temp=head;

//     while(p!=1){
//         temp=temp->next;
//         p--;
//     }
//     head2->next=temp->next;
//     temp->next=head2;

/*
           struct node
{
    int data;
    struct node *next;

} *head, *head2, *temp, *temp2;

void main()
{
    int p = 4;

    head = NULL;
    head = malloc(sizeof(struct node));
    printf("enter any number:");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    head2 = NULL;

    for (int n = 0; n < 5 - 1; n++)
    {
        head2 = malloc(sizeof(struct node));
        printf("enter any number:");
        scanf("%d", &head2->data);
        head2->next = NULL;
        temp->next = head2;
        temp = temp->next;
    }

    temp = head;

    for (int n = 0; n < 5 - 1; n++)
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }

    head2 = malloc(sizeof(struct node));
    printf("\nenter any for last number:");
    scanf("%d", &head2->data);
    head2->next = NULL;
    temp = head;
    while (p!=1)
    {
        temp = temp->next;
        p--;
    }
    head2->next=temp->next;
    temp->next=head2;

    temp = head;
*/