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
        
        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPosition(int ,int);

        void DeleteFirst(int);
        void DeleteLast(int);
        void DeleteAtPosition(int);

        void Display();
 };

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

    return 0;
}

//we can create multiple likes list by using obj;