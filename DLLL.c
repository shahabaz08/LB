

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
    struct node * prev;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE First,int iNo)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        (*First)->prev=newn;
        newn->next=*First;
        *First=newn;
    }
}
int main()
{
    PNODE Head=NULL;

    InsertFirst(&Head,21);
    InsertFirst(&Head,11);


    return 0;
}