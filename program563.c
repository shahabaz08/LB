// take number from user and togle anternate nibble
//f0f0f0f0


// toggle of a number


#include <stdio.h>
typedef unsigned int UINT;

// 0000     0000    0000    0000    0000    0000    0000    0000
// 0000     1111    0000    1111    0000    11111    0000    1`000
    

UINT ToggleBit(UINT No)
{
    UINT iMask=0xF0F0F0F0;
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


