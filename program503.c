// modified

//return largest element in the linked list

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

int Maximum(PNODE First)
{
    int iMax=0;
    if (First==NULL)
    {
        printf("Linked list is empty");
        return 0;
    }
    iMax=First->data;
    while(First!=NULL)
    {
        if(First->data>iMax)
        {
            iMax=First->data;

        }
        First=First->next;
    }
    return iMax;
}

int main()
{ 
    int iRet=0;
    PNODE Head=NULL;

     iRet=Addition(Head);
    Printf("maximum is  is :%d\n",iRet);
    
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    iRet=Addition(Head);
    Printf("maximum is  is :%d\n",iRet);


   

    return 0;
}