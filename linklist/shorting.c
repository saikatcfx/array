#include <stdio.h>
#include <stdlib.h>
// wap to apply sorting technique in linkedlist in c
struct node
{
    int data;
    struct node *next;

} *head, *head2, *temp,*f,*l;

int main()
{
    head = NULL;
    int i,j,size,temp2,swap=0;

    printf("user enter the size of the linklist :\n");
    scanf("%d",&size);

    head = malloc(sizeof(struct node));
    printf("enter any no for 1st node :");
    scanf("%d", &head->data);

    head->next = NULL;
    temp = head;

    for (i = 0; i <size-1; i++)
    {
        head2 = malloc(sizeof(struct node));
        printf("enter any no :");
        scanf("%d", &head2->data);
        head2->next = NULL;
        temp->next = head2;
        temp = temp->next;
    }

    temp = head;
     printf("unsorted linklist is :\n");
    for (i = 1; i <size-1; i++)
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
    f=head;
    while(f->next!=NULL){
        l=f->next;
        while(l!=NULL){
            if(f->data>l->data){
                swap=f->data;
                f->data=l->data;
                l->data=swap;

            }
            l=l->next;
        }
      f=f->next;
    }
     f=head;
     printf("the shoted linklist is:\n");
    while(f!=NULL){
        printf("%d\t",f->data);
        f=f->next;
    }

  
}