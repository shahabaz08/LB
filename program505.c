/// adiition of digits in linked list



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

int SumDigit(int iNo)
{
    int iSum=0,iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    return iSum;
}

void DisplayDigitsSum(PNODE First)
{
   int iRet=0;
    while(First!=NULL)
    {
        iRet=SumDigit(First->data);
        printf("Adiition is:%d\n%d",First->data,iRet);
        First=First->next;
    }
}
int main()
{ 
    int iRet=0;
    PNODE Head=NULL;

     
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    DisplayDigitsSum(Head);


   

    return 0;
}