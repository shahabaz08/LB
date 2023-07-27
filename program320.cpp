// return the sum of digits of even number;

#include<iostream>

using namespace std;
class DigitX
{
    public:
        int iNo;

        DigitX()  // paramaterised contructr
        {
            iNo=0;
        }
        DigitX(int i)
        {
            iNo=i;
        }
        int SumEvenDigit()
        {
            int iSum=0;
            int iTemp=iNo;
            int iDigit=0;
            while(iTemp!=0)
            {
                iDigit=iTemp%10;
                if(iDigit%2==0)
                {
                    iSum=iSum+iDigit;
                }
                iTemp=iTemp/10;
            }
            return iSum;
        }
};
int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"enter number :"<<"\n";
    cin>>iValue;

    DigitX obj(iValue);
    cout<<obj.iNo<<"\n";

    iRet=obj.SumEvenDigit();

    cout<<"summation of even digits :"<<iRet<<"\n";
    cout<<"the original number is :"<<obj.iNo;

    return 0;
}