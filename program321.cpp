//display frequency of digit in a number // 
// 11223334
//1 - 2 times
//2 -  2 times
//3 - 3 times etc

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
        void DisplayFrequency()
        {
            int iTemp=iNo;
            int iDigit=0;
            int Frequency[10]={0};

            while(iTemp!=0)
            {
                iDigit=iTemp%10;
                Frequency[iDigit]++;
                iTemp=iTemp/10;
            }
            for(int iCnt=0;iCnt<10;iCnt++)
            {
                if(Frequency[iCnt]>0)
                {
                    cout<<iCnt<<" occurs at "<<Frequency[iCnt]<<" times "<<"\n";
                }
            }

        }
};
int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"enter number :"<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();

    
    return 0;
}