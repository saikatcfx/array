#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void create();
void addNew();
void addFirst();
void addMid();
void addLast();
void rem();
void removeFirst();
void removeMid();
void removeLast();
void display();
void count();

struct node
{

    int data;
    struct node *next;
};
   
    struct node*head=NULL;   
   

int main()
{
    int choice;
    do
    {
        printf(" menu:-\n1.create\n2.add new node\n3.remove node\n4.display\n5.count\n6.exit\nenter your choice:-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            addNew();
            break;
        case 3:
            rem();
            break;
        case 4:
            display();
            break;
        case 5:
            count();
            break;
           case 6:
            exit(0);
            break;
        
        default:
            printf("invalid choice\n");
        }
    }while(1);
}
void create()
{
   if(head==NULL){
         head=(struct node *)malloc(sizeof(struct node));
         printf("enter data:-");
         scanf("%d",&head->data);
         head->next=NULL;
   }  
   else
   {
    printf("list already created.\n");
   }
}  
void addNew()
{
        int choice;
    if(head!=NULL)
    {
        printf("1.addFirst\n2.addMid\n3.addLast\nenter your choice:-");
        scanf("%d",&choice);
        switch(choice){
            case 1:addFirst();
            break;

            case 2:addMid();
            break;

            case 3:addLast();
            break;
            default:printf("wrong choice.\n");

        }
    }
    else{
        printf("create list first\n");
    }
}
void addFirst()
{
    struct node *head2=NULL;
    head2=(struct node*)malloc(sizeof(struct node));
    printf("enter data:-");
    scanf("%d",&head2->data);
    head2->next= head;
    head=head2;
}
void addMid()
{
    struct node *temp=head,*head2;
    int p;
    printf("enter p");
    scanf("%d",&p);
    p--;
    head2=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&head2->data);
    while(p!=1)
    {
        temp=temp->next;
        p--;
    }
    head2->next=temp->next;
    temp->next=head2;
}
void addLast()
{
    struct node *temp=head,*head2;
    head2=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&head2->data);
    head2->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next; //traversing
    }
        temp->next=head2;
}
void rem()
{
    int choice;
    if(head!=NULL)
    {
        printf("1. remove First\n2. remove Mid\n3. remove Last\nenter your choice:-");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            removeFirst();
            break;

            case 2:
            removeMid();
            break;

            case 3:
            removeLast();
            break;
            default:
            printf("wrong choice.\n");
        }

    }

    else
    {
        printf("create list first\n");
    }
}
void removeFirst()
{
    struct node *temp=head;
    head=head->next;
    printf("delted node%d\n",temp->data);
    free(temp);

}
void removeLast(){
    struct node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }printf("deleted node %d",temp->next->data);
    free(temp->next);
    temp->next=NULL;
}
void removeMid()
{
    struct node *temp=head,*temp2;
    int p;
    printf("enter p");
    scanf("%d",&p);
    p--;
    
    while(p!=1)
    {
        temp=temp->next;
        p--;
    }
    temp2=temp->next;
    temp->next=temp2->next;
    printf("deleted node is%d\n",temp->data);
    free(temp2);
}
void display()
{
    struct node*temp=head;
      if(head==NULL)
      {
        printf("list is empty.\n");
      }
      else{
        while(temp!=NULL)
      {
        printf("%d-->\t",temp->data);
        temp=temp->next;
      }
      printf("\n");
      }
}
void count()
{
    int p=0;
     struct node*temp=head;
      
    
        while(temp!=NULL)
      {
        
        p++;
        
        temp=temp->next;
      }
      printf("total number of node is:%d\n",p);
   
   

}