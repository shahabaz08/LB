// accept number and position and toggle the bit

// toggle of a number


#include <stdio.h>
typedef unsigned int UINT;

    

UINT ToggleBit(UINT No,UINT Pos)
{
    UINT iMask=0x00000001;
    UINT Result=0;
    iMask=iMask<<(Pos-1);

    iMask=~iMask;
    Result=No&iMask;
    return iMask;// iAns=NO&iMAsk;
}
int main()
{
    UINT Value=0,Pos=0;
    UINT Ret=0;

    printf("Enter Number:\n");
    scanf("%d",&Value);

    printf("Enter Position:\n");
    scanf("%d",&Pos);

    Ret=ToggleBit(Value,Pos);

   printf("Updated number is:%d",Ret);

    return 0;
}

//204
// ans 144
