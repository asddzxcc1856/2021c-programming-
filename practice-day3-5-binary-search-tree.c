#include <stdio.h> // binary search tree 實作 - c

struct node{
    struct node *leftptr;
    int data;
    struct node *rightptr;
};

void insertNode(struct node **root,int val);

void preorder(struct node *p);

void inorder(struct node *p);

void postorder(struct node *p);

int main (void)
{
    struct node *rootPtr = NULL;

    insertNode(&rootPtr, 27);
    insertNode(&rootPtr, 42);
    insertNode(&rootPtr, 13);
    insertNode(&rootPtr, 6);
    insertNode(&rootPtr, 33);
    insertNode(&rootPtr, 48);
    insertNode(&rootPtr, 17);

    printf("preorder : ");
    preorder(rootPtr);

    printf("\ninorder : ");
    inorder(rootPtr);

    printf("\npostorder : ");
    postorder(rootPtr);

    printf("\n");

    return 0;
}


void insertNode(struct node **root,int val)
{
    if((*root)==NULL)
    {
        (*root) = (struct node *)malloc(sizeof(struct node));
        if((*root) != NULL)
        {
            (*root)->data = val;
            (*root)->leftptr = NULL;
            (*root)->rightptr = NULL;
        }
        else
        {
            printf("memory is not enough!\n");
        }
    }
    else
    {
        if((*root)->data>val)
        {
            insertNode(&((*root)->leftptr),val);
        }
        else if((*root)->data<val)
        {
            insertNode(&((*root)->rightptr),val);
        }
        else
        {
            printf("­«½Æ\n");
        }
    }

}

void preorder(struct node *p)
{
    if(p!=NULL)
    {
        printf("%3d-->",p->data);

        preorder(p->leftptr);

        preorder(p->rightptr);
    }

}

void inorder(struct node *p)
{
    if(p!=NULL)
    {
        inorder(p->leftptr);

        printf("%3d-->",p->data);

        inorder(p->rightptr);
    }
}

void postorder(struct node *p)
{
    if(p!=NULL)
    {
        postorder(p->leftptr);

        postorder(p->rightptr);

        printf("%3d-->",p->data);
    }
}
