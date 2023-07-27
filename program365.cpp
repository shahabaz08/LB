//SinglyLL in generic 

/// typedef is not allowed in generic programming


#include<iostream>
using namespace std;
template<class T>
struct node
{
    T data;
    struct node *next;
};

//typedef struct node NODE;
//typedef struct node * PNODE;

template<class T>
class SinglyLL
{
    public:
         struct node<T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
};


template<class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
}

template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
     struct node<T> * newn = new node<T>;  

    newn -> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}
template<class T>
void SinglyLL<T> ::InsertLast(T no)
{
    struct node <T>* newn=new node<T>;
    newn->data=no;
    newn->next=NULL;
    struct node<T> * temp=NULL;
    temp=First;

    if(First==NULL)
    {
        First=newn;
    }
    else if((First)->next==NULL)
    {
        (First)->next=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
}
template<class T>
void SinglyLL<T>::DeleteFirst()
{
    struct node <T>*temp=First;

    if(First==NULL)
    {
        cout<<"invalid case ";
        return;
    }
    else if((First)->next==NULL)
    {
        delete(First);
    }
    else
    {
        temp=First;
        First=(First)->next;
        delete(temp);
        
    }
}
template<class T>
void SinglyLL<T>:: DeleteLast()
{
    struct node<T> temp=*First;
    if(First==NULL)
    {
        cout<<"invalic case";
        return;

    }
    else if((First)->next==NULL)
    {
        delete(First);
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete(temp->next);
        temp->next=NULL;
    }

}
template<class T>
void SinglyLL <T>:: Display()
{
     struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}
template<class T>
int SinglyLL <T>:: Count()
{
     struct node<T> * temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

int main()
{
    int iRet=0;

    SinglyLL <int>iobj;
    iobj.InsertFirst(101);
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.InsertLast(1000);
    iobj.DeleteFirst();
    iobj.DeleteLast();
    iobj.Display();
     iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

     SinglyLL <char>cobj;
    cobj.InsertFirst('a');
    cobj.InsertFirst('s');
    cobj.InsertFirst('f');
    cobj.InsertFirst('s');
    cobj.Display();
     iRet = cobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

     SinglyLL <float>fobj;
    fobj.InsertFirst(10.1);
    fobj.InsertFirst(51.67);
    fobj.InsertFirst(21.56);
    fobj.InsertFirst(11.56);
    fobj.Display();
     iRet = fobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

     SinglyLL <double>dobj;
    dobj.InsertFirst(1.01);
    dobj.InsertFirst(5.22341);
    dobj.InsertFirst(2.2321);
    dobj.InsertFirst(23.2211);
    dobj.Display();
     iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}

//