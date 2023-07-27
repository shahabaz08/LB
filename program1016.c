
// take number tha check occurance
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int SearchFirstOccurance(PNODE First,int No)
{
    int Counter=1;
    int ipos=-1;

    while(First !=NULL)
    {
        if(First->data==No)
        {
            ipos=Counter;
            break;
        }
        First=First->next;
        Counter++;
    }
    return ipos;
}
int SearchLastOccurance(PNODE First,int No)
{
    int Counter=1;
    int ipos=-1;

    while(First !=NULL)
    {
        if(First->data==No)
        {
            ipos=Counter;
            
        }
        First=First->next;
        Counter++;
    }
    return ipos;
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 151);
    InsertFirst(&Head, 121);
    InsertFirst(&Head, 111);
    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);
    
    Display(Head);
    iRet=SearchLastOccurance(Head,101);
    if(iRet==-1)
    {
        printf("There is noch element :\n");

    }
    else
    {
        printf("Elements is at index: %d",iRet);
    }

    return 0;
}
