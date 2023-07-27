#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE)); //allocate memory
    newn->data=no;  
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next =*First;
        *First=newn;

    }

}
void InsertLast(PPNODE First,int no)
{
    
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    PNODE temp=*First;
    newn->data=no;
    newn->next=NULL;

     if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

        
    }


}
void DeleteFirst(PPNODE First)
{
    PNODE temp=*First;

    if(*First ==NULL)//case A
    {
        return;
    }
    else if ((*First)->next==NULL) // case B
    {
        free(*First);
        *First=NULL;

    }
    else //case c
    {
        (*First)=(*First)->next;
        free(temp);

    }

}
void DeleteLast(PPNODE First)
{
    PNODE temp=*First;
    if(*First == NULL)//empty LL
    {
        return;
    }
    else if ((*First)->next==NULL) // only 1 node
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }   
        free(temp->next);
        temp->next=NULL;
    }

}
void Display(PNODE First)
{
    printf("elelments from the linked list are :\n");
    while(First!=NULL)
    {
        printf("| %d |->",First->data);
        First=First->next;
    }
    printf("NULL\n");
    
}
int Count(PNODE First)
{
    int iCnt=0;
    printf("elelments from the linked list are :\n");
    while(First!=NULL)
    {
        iCnt++;
        First=First->next;
    }
    return iCnt;
    
}
void InsertAtPosition(PPNODE First,int no,int iPos)
{   
    int NodeCnt=0;
    int iCnt=0;
    PNODE newn=NULL;
    PNODE temp=NULL;
    NodeCnt=Count(*First);
    if((iPos<1) || (iPos>(NodeCnt+1)))
    {
        printf("Invalid position:\n");
        return;
    }

    if(iPos==1)
    {
        InsertFirst(First,no);
    }
    else if (iPos==NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;

        temp=*First;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
           
        }
         newn->next=temp->next;
         temp->next=newn;
    }

}
void DeleteAtPosition(PPNODE First,int iPos)
{
    int NodeCnt=1,iCnt=0;

    PNODE temp=NULL;
    PNODE temp1=NULL;
    NodeCnt=Count(*First);

    if((iPos<1)||(iPos>NodeCnt))
    {
        printf("Invalid Position:\n");
        return;

    }
    
    if(iPos==1)
    {
        DeleteFirst(First);
        
    }
    else if(iPos==NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp=*First;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp1=temp->next;
        temp->next=temp1->next;
        free(temp1);

    }
}
int main()
{ 
    int iRet=0;
    PNODE Head=NULL;
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    iRet=Count(Head);
    printf("1. elements are :%d\n\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);
     Display(Head);
    iRet=Count(Head);
    printf("2. elements are :%d\n\n",iRet);

    InsertAtPosition(&Head,105,5);
     Display(Head);
    iRet=Count(Head);
    

    DeleteAtPosition(&Head,5);
    Display(Head);


    
    DeleteFirst(&Head);
    Display(Head);
    iRet=Count(Head);
    printf("3. elements are :%d",iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet=Count(Head);
    printf("4. elements are :%d",iRet);

    

    return 0;
}