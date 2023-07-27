
//generic using oop   ie class template
#include<iostream>
using namespace std;

class ArrayX
{
    public:

    int *Arr;
    int iSize;
    ArrayX(int i);
    void Accept();
    void Display();
   
};

/*
Return value Class name::Function name
*/
  
  ArrayX::  ArrayX(int i)
    {
        iSize=i;
        Arr=new int[iSize];
    }

    void ArrayX ::Accept()
    {
        cout<<"enter the elements"<<"\n";
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
     void ArrayX ::Display()
    {
        cout <<"elemets of array are"<<"\n";
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }

int main()
{
    ArrayX aobj(5);
    aobj.Accept();
    aobj.Display();
    

    return 0;
}