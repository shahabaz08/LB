#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
 class SinglyLL
 {
    public :
        PNODE First;//only one char so 8 bytes memory allocated
        int iCount;
        
        //Behavoiurs
        SinglyLL();
        
        void InsertFirst(int no);
        void InsertLast(int);
        void InsertAtPosition(int ,int);

        void DeleteFirst(int);
        void DeleteLast(int);
        void DeleteAtPosition(int);

        void Display();
 };
//Return_Value Class_Name::Function_Name(Parameters)
//{
        //Logic
//}

SinglyLL :: SinglyLL()
{
    First=NULL;
    iCount=0;
}

void SinglyLL :: InsertFirst(int no)
{}

void SinglyLL :: InsertLast(int no)
{}

void SinglyLL :: InsertAtPosition(int no ,int iPos)
{}

void SinglyLL :: DeleteFirst(int no)
{}

void SinglyLL :: DeleteLast(int no)
{}

void SinglyLL :: DeleteAtPosition(int iPos)
{}



int main()
{
    SinglyLL obj1;
    cout<<sizeof(obj1)<<"\n";

    cout<<"first pointer contains :"<<obj1.First<<"\n";
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";
    

    return 0;
}

