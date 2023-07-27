// off the 4 th bit of a number 


#include <stdio.h>
typedef unsigned int UINT;

// 0000     0000    0000    0000    0000    0000    0000    0000
// 1111     1111    1111    1111    1111    1111    1111    0111    
// F        f       f       f       f       f       f       7

UINT OffBit(UINT No)
{
    UINT iMask=0xFFFFFFF7;

    return (No & iMask);// iAns=NO&iMAsk;
}
int main()
{
    UINT Value=0;
    UINT Ret=0;

    printf("Enter Number:\n");
    scanf("%d",&Value);

    Ret=OffBit(Value);

   printf("Updated number is:%d",Ret);

    return 0;
}

