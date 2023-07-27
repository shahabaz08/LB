
//addition of n number 
#include<iostream>
using namespace std;

template<class T>

T Maximum(T Arr[],int iSize)
{
    int iCnt=0;
    T Max=Arr[0];
 
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>Max)
        {
            Max=Arr[iCnt];
        }
    }
    return Max;
}


int main()
{
    int Data[]={10,20,30,40};
    int ret;

    ret=Maximum(Data,4);
    cout<<"Maximum is "<<ret;


    return 0;
}