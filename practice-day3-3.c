#include <stdio.h> // Stack ¹ê§@ - c

struct node{
    int data;
    struct node *nextptr;
};

void dispstack(struct node *np)
{
    if(np==NULL)
    {
        printf("stack is empty!\n");
    }
    else
    {
        printf("The stack is : \n");
        while(np!=NULL)
        {

            printf("%d-->",np->data);
            np = np->nextptr;
        }

        printf("NULL\n\n\n");
    }
}

void push(struct node **topptr,int val)
{
    struct node *newptr;
    newptr = (struct node*)malloc(sizeof(struct node));
    if(newptr!=NULL)
    {

        newptr->data = val;
        newptr->nextptr = *topptr;
        *topptr = newptr;
    }
    else
    {
        printf("the memory is not enough");
    }
}

int pop(struct node **topptr)
{

    int popval;
    struct node *tempptr;

    if(*topptr==NULL) return -1;


    tempptr = *topptr;
    popval = (*topptr)->data;
    *topptr = (*topptr)->nextptr;


    free(tempptr);


    return popval;

}

int main (void)
{
    struct node *stack;
    stack = NULL;
    dispstack(stack);
    push(&stack,1);
    push(&stack,2);
    push(&stack,3);
    dispstack(stack);
    printf("%d is popped\n\n\n",pop(&stack));
    dispstack(stack);

}
