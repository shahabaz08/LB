// toggle 5 6 7 bits

//


#include <stdio.h>
typedef unsigned int UINT;

// 0000     0000    0000    0000    0000    0000    0000    0000
// 0000     0000    0000    0000    0000    0000    0111    0000
    
// F        f       f       f       f       f       7        0

UINT ToggleBit(UINT No)
{
    UINT iMask=0x00000070;
    UINT iAns=0;
    iAns=No^iMask;

    return iMask;// iAns=NO&iMAsk;
}
int main()
{
    UINT Value=0;
    UINT Ret=0;

    printf("Enter Number:\n");
    scanf("%d",&Value);

    Ret=ToggleBit(Value);

   printf("Updated number is:%d",Ret);

    return 0;
}

