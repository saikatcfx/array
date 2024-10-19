#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;

} *s, *e, *p;
int main()
{
    int c;
    s = (struct node *)malloc(sizeof(struct node));
    e = s;
    while (1)
    {
        printf("enteer a value for node:\n");
        scanf("%d", &e->data);
        printf("enteerb 1 for new nod :");
        scanf("%d", &c);
        if (c == 1)
        {
            e->next = (struct node *)malloc(sizeof(struct node));
            e = e->next;
        }
        else
        {
            e->next = NULL;
            break;
        }

    }
    printf("the link lis ts  is:\n");
    p=s;
    while (p!=NULL){
        if(p->next==NULL){
            printf("%d",p->data);
        }
        else {
          printf("%d",p->data);  
        }
        p=p->next;
    }
}
