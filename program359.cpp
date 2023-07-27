
//addition of n number 
#include<iostream>
using namespace std;

template<class T>

T Addition(T Arr[],int iSize)
{
    int iCnt=0;
    T Sum;
 
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        Sum=Sum+Arr[iCnt];
    }
    return Sum;
}


int main()
{
    int Data[]={10,20,30,40};
    int ret;

    ret=Addition(Data,4);
    cout<<"Addition is "<<ret;


    return 0;
}