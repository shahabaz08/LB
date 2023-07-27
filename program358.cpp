#include<iostream>
using namespace std;

template<class T>

void Display(T Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Data[]={10,20,30,40};

    Display(Data,4);

    double d[]={1.02,1.23,1.5};

    Display(d,3);

    char datac[]={'a','b'};

    Display(datac,2);

    return 0;
}