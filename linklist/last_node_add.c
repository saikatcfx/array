#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head, *head2, *f, *l, *temp;
int main()
{
    head = NULL;

    head = malloc(sizeof(struct node));
    printf("enter any number of 1st node:\n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    head2 = NULL;
    for (int i = 0; i < 5 - 1; i++)
    {
        head2 = malloc(sizeof(struct node));
        printf("enter any number:\n");
        scanf("%d", &head2->data);
        head2->next = NULL;
        temp->next = head2;
        temp = temp->next;
    }
    temp = head;

    for (int i = 0; i < 5 - 1; i++)
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
    // temp=head;
    head2 = malloc(sizeof(struct node));
    printf("enter any number:\n");
    scanf("%d", &head2->data);
    head2->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;

    temp = head;

    for (int i = 0; i < 5 - 1; i++)
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}
