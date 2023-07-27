// accept number and check 12 th bit is on or off
#include <stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;

// 0000     0000    0000    0000    0000    0000    0000    0000

// 0000     0000    0000    0000    0000    0001    1100    0000
//  0       0       0       0       0       1       c      0   
//  0000 0200
bool CheckBit(UINT iNo)
{
    UINT iMask=0x000001C0;  
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
        printf("12th bit is ON");
    }
    else
    {
        printf("12th bit is OFF");
    }

    return 0;
}

