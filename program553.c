//take number and check how many bits are ON

#include <stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No)
{
    int iCnt=0;
    int Digit=0;
    while(No!=0)
    {
        Digit=No%2;
        iCnt=iCnt+Digit;                 //if(Digit==1)
                                        //  {
                                       //  iCnt++;
                                      //  }
        No=No/2;

    }
    return iCnt;
}
int main()
{
    UINT Value=0;
    int Ret=0;

    printf("Enter Number:\n");
    scanf("%d",&Value);

    Ret=CountOnBits(Value);

    printf("Number of bits which are On are:%d\n",Ret);

    return 0;
}


