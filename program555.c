//check 10 th bit of a number is on or off
#include <stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;

//
// 0000     0000    0000    0000    0000    0010    0000    0000
//  0       0       0       0       0       2       0       0   
//  0000 0200
bool CheckBit(UINT iNo)
{
    UINT iMask=0x00000200;  
    UINT Result=0;
    Result=iNo&iMask;
    if(Result==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT Value=0;
    bool bRet=false;

    printf("Enter Number:\n");
    scanf("%d",&Value);

    bRet=CheckBit(Value);

    if(bRet==true)
    {
        printf("10th bit is ON");
    }
    else
    {
        printf("10th bit is OFF");
    }

    return 0;
}

