// Doubly linear linked list

#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    
    int data;
    struct node *next;  
    struct node *prev;   //X

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;
        
    }

}
void InsertLast(PPNODE First,int No)
{
    PNODE temp=*First;
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
}
void DeleteFirst(PPNODE First)
{
    PNODE temp=NULL;
    if(*First==NULL)
    {
        return;
    }
    else if ((*First)->next==NULL)
    {
        free(*First);
    }
    else
    {
         *First=(*First)->next;
        free((*First)->prev);
        (*First)->prev=NULL;
    }
}
void DeleteLast(PPNODE First)
{
    PNODE temp=*First;
    if(*First==NULL)
    {
        return;
    }
    else if ((*First)->next==NULL)
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        while(temp->next->next !=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}
void Display(PNODE First)
{
    while(First!=NULL)
    {
        printf("| %d |<=>",First->data);
        First=First->next;
    }
    printf("NULL\n");
}
int Count(PNODE First)
{
    int iCnt=0;
    while(First!=NULL)
    {
        iCnt++;
        First=First->next;
    }
    return iCnt;
}
int main()
{
    PNODE Head=NULL;

    InsertFirst(&Head,110);
    InsertFirst(&Head,120);
    InsertFirst(&Head,110);
    InsertFirst(&Head,120);


    InsertLast(&Head,5);
    Display(Head);
    DeleteFirst(&Head);
    DeleteLast(&Head);

    Display(Head);

    return 0;
}