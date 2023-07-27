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

void InsertFirst(PPNODE First,PPNODE Last,int No)
{

}
void InsertLast(PPNODE First,PPNODE Last,int No)
{
    
}
void Display(PNODE First,PNODE Last)
{

}

int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,51);

    Display(Head,Tail);


    return 0;
}