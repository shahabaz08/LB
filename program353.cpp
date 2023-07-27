/// generic programming

#include<iostream>

using namespace std;

template<class T>

T Addition(T i,T j)
{
    T ans;  //not initialize to 0 because all int ,double char have diffewnt values ie 0,0.0,\0
    ans=i+j;

    return ans;
}

int main()
{
    double a=11.9,b=10.1,ret=0.0;
    ret=Addition(a,b);
    cout<<"Addition is:"<<ret<<"\n";

    int x=11,y=9,iret=0.0;
    iret=Addition(x,y);
    cout<<"Addition is:"<<ret<<"\n";



    return 0;
}