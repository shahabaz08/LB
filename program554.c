// accept nukmber and check whether the 4th it is ON or OFF
#include <stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask=8;
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
        printf("4Th bit is ON");
    }
    else
    {
        printf("4th bit is OFF");
    }

    return 0;
}