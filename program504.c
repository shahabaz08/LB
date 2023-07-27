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

int Manimum(PNODE First)
{
    int iMin=0;
    if (First==NULL)
    {
        printf("Linked list is empty");
        return 0;
    }
    iMin=First->data;
    while(First!=NULL)
    {
        if(First->data<iMin)
        {
            iMin=First->data;

        }
        First=First->next;
    }
    return iMin;
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

    iRet=Manimum(Head);
    Printf("maximum is  is :%d\n",iRet);


   

    return 0;
}