// Binary Search Tree Implemantation

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert(PPNODE Root,int No)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->lchild=NULL;
    newn->rchild=NULL;
    PNODE temp=*Root;

    if(*Root ==NULL)
    {
        *Root=newn;
    }
    else
    {
        while(1)
        {
            if(No >temp->data)
            {
                if(temp->rchild==NULL)
                {
                    temp->rchild=newn;
                    break;
                }
            }
            else if(No < temp->data)
            {
                if(temp->lchild==NULL)
                {
                    temp->lchild=newn;
                    break;
                }
            }
            else if(No ==temp->data)
            {
                free(newn);
                printf("Duplicate element not allowed \n");
                break;
            }
        }
    }

}
void Inorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\t",Root->data);
        Inorder(Root->rchild);
    }
}
void preorder(PNODE Root)
{
    if(Root != NULL)
    {
        printf("%d\t",Root->data);
        preorder(Root->lchild);
        preorder(Root->rchild);
    }
}
void postorder(PNODE Root)
{
    if(Root != NULL)
    {
        postorder(Root->lchild);
        postorder(Root->rchild);
        printf("%d\t",Root->data);

    }
}



int main()
{
    PNODE Head=NULL;
    Insert(&Head,11);
    Insert(&Head,7);
    Insert(&Head,21);
    preorder(Head);
    postorder(Head);
    Inorder(Head);



    return 0;
}
