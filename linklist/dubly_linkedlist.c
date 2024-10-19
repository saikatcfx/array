#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pre;
    struct node *post;

} *head, *head2, *temp;

int main()
{
    int i;
    int n;
    printf("enter the size of node\n");
    scanf("%d",&n);

    head = malloc(sizeof(struct node));
    printf("enter any  number:\n");
    scanf("%d", &head->data);

    temp = head;
    temp->pre = NULL;
    temp->post = NULL;

    for (i = 1; i < n; i++)
    {
        head2 = malloc(sizeof(struct node));
        printf("enter any  number:\n");
        scanf("%d", &head2->data);
        head2->post = NULL;

        temp->post = head2;
        temp->post->pre = temp;
       
        temp = temp->post;
    }

    temp = head;

    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->post;
    }
}
