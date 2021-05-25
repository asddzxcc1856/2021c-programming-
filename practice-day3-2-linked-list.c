#include <stdio.h>  // Linked list 實作 - C

struct t_node{
    int data;
    struct t_node *nextptr;
};

void displist(struct t_node *np)
{
    if(np == NULL)
    {
        printf("List is empty!\n");
    }
    else
    {
        printf("The list is : \n");
        while(np!=NULL)
        {
            printf("%d-->",np->data);
            np = np->nextptr;
        }
        printf("NULL\n\n");
    }
}

struct t_node* insert_v(struct t_node *np,int val)
{
    struct t_node *newptr,*currentptr,*previousptr;

    newptr = (struct t_node*)malloc(sizeof(struct t_node));
    if(newptr != NULL)
    {
        newptr->data = val;
        newptr->nextptr = NULL;
        previousptr = NULL;
        currentptr = np;
        while(currentptr != NULL && val > currentptr->data)
        {
            previousptr = currentptr;
            currentptr = currentptr->nextptr;
        }
        if(previousptr==NULL)
        {
            newptr->nextptr = np;
            np = newptr;
        }
        else
        {
            previousptr->nextptr = newptr;
            newptr->nextptr = currentptr;

        }
        return np;
    }
    else
    {
        printf("記憶體不夠.\n");
        return NULL;
    }
}

struct t_node* delete_v(struct t_node * np,int val)
{
    struct t_node *previousptr,*currentptr,*tempptr;
    if(val == np->data)
    {
        tempptr = np;
        np = np->nextptr;
        free(tempptr);
        return np;
    }
    else
    {
        previousptr = np;
        currentptr = np->nextptr;
        while(currentptr!=NULL&&currentptr->data!=val)
        {
            previousptr = currentptr;
            currentptr = currentptr->nextptr;
        }
        if(currentptr!=NULL)
        {
            tempptr = currentptr;
            previousptr->nextptr = currentptr->nextptr;
            free(tempptr);
            return np;
        }
    }
    return NULL;
}



int main(void)
{
    struct t_node* head;
    head = NULL;
    //插入值
    head = insert_v(head,14);
    head = insert_v(head,13);
    head = insert_v(head,10);
    head = insert_v(head,18);
    //刪除
    head = delete_v(head,14);

    //輸出
    displist(head);

    return 0;

}
