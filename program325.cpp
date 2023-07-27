// run thr 324 code using one array  
// accept 2 number and check number is anagram or not
// input == 789567  5977688
// numbers are angram

#include<iostream>

using namespace std;

bool CheckAnagram(int iNo1,int iNo2)
{
    int Frequency1[10]={0};
     int Frequency2[10]={0};
     bool Flag=false;

     while(iNo1!=0)
     {
        Frequency1[(iNo1%10)]++;
        iNo1=iNo1/10;

     }
      while(iNo2!=0)
     {
        Frequency1[(iNo2%10)]--;
        iNo2=iNo2/10;
        
     }
     for(int iCnt=0;iCnt<10;iCnt++)
     {
        if(Frequency1[iCnt]==0)
        {
            Flag=true;
            break;
        }
     }
     return Flag;




}
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=0;

    cout<<"enter first number"<<"\n";
    cin>>iValue1;

    cout<<"enter seconf number "<<"\n";
    cin>>iValue2;

    bRet=CheckAnagram(iValue1,iValue2);

    if(bRet==true)
    {
        cout<<"numbers are anagram";

    }
    else
    {
        cout<<"numbers are not anagram";
    }




    return 0;
}