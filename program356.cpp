/// swapping of two numbers 

/// generic programming


// call by reference


#include<iostream>
using namespace std;

void swapi(int &x ,int& y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;
}
void swapd(double &x ,double& y)
{
    double temp;

    temp=x;
    x=y;
    y=temp;
}
int main()
{

    int a=11,b=10;

    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    swapi(a,b);

    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    double p=11.9,q=10.7;

    cout<<"Value of a "<<p<<"\n";
    cout<<"Value of b "<<q<<"\n";

    swapd(p,q);

    cout<<"Value of a "<<p<<"\n";
    cout<<"Value of b "<<q<<"\n";





    return 0;
}