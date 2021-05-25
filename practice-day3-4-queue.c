#include <stdio.h> // Queue 實作 - c

struct node{
    int data;
    struct node *nextptr;

};

void enqueue(struct node **h,struct node **t,int val)
{
    struct node *newptr;
    newptr = (struct node *)malloc(sizeof(struct node));
    if(newptr != NULL)
    {
        newptr->data = val;
        newptr->nextptr = *h;
        if(*h==NULL)
        {
            *h = newptr;
        }
        else
        {
            (*t)->nextptr = newptr;
        }
        *t = newptr;
    }
    else
    {
        printf("memory is not enough");
    }
}

int dequeue(struct node **h,struct node **t)
{
    int val;
    struct node *tempptr;
    if(*h==NULL) return -1;
    tempptr = *h;
    val = (*h)->data;
    *h = (*h)->nextptr;

    if(*h==NULL)
    {
        *t = NULL;
    }
    free(tempptr);
    return val;
}

void printqueue(struct node *head,struct node *tail)
{
    if(head==NULL)
    {
        printf("queue is empty!\n");
    }
    else
    {
        printf("The queue is : \n");
        while(head!=tail->nextptr)
        {
            printf("%d-->",head->data);
            head = head->nextptr;
        }
        printf("NULL\n\n\n");
    }
}

int main (void)
{
    struct node *head,*tail;
    head = NULL;
    tail = NULL;
    printqueue(head,tail);
    enqueue(&head,&tail,1);
    enqueue(&head,&tail,1);
    enqueue(&head,&tail,1);
    printf("%d is dequeued\n\n\n",dequeue(&head,&tail));
    printqueue(head,tail);

}
