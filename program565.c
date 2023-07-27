//accept number ans accept range and off the bits in the range

//6-13  


#include <stdio.h>
typedef unsigned int UINT;

// 0000     0000    0000    0000    0000    0000    0000    0000
// 1111     1111    1111    1111    1110    0000    0001    1111    
// F        f       f       f       E       0        1       F

UINT ToggleBit(UINT No,UINT Start,UINT End)
{
    UINT Mask1=0,Mask2=0,Mask=0,Result=0;

    Mask1=Mask1<<(Start-1);
    Mask2=Mask2>>(32-End);

    Mask=Mask1&Mask2;

    Result=No^Mask;
    return Result;
}

int main()
{
    UINT Value=0;
    UINT Ret=0;
    UINT iRan1=0,iRan2=0;

    printf("Enter Number:\n");
    scanf("%d",&Value);

    printf("Enter the small range element:\n");
    scanf("%d",&iRan1);

    printf("Enter the big element of the range:\n");
    scanf("%d",&iRan2);

    Ret=ToggleBit(Value,iRan1,iRan2);

   printf("Updated number is:%d\n",Ret);

    return 0;
}

/*
Start =7
End=17
   input    0010 1010 1010 111{0 1101 1010 01}10 1101
   output   0010 1010 1010 111{1 0010 0101 10}01 0010

  output mask:- 0000 0000 0000 0001 1111 1111 1100 0000

  mask 1= 1111 1111 1111 1111 1111 1111 1111 1111
  mask 2= 1111 1111 1111 1111 1111 1111 1111 1111

  mAsk1= mask1<< Start-1)
         1111 1111 1111 1111 1111 1111 1100 0000

  mAsk2= mask2 >> (32 -End)
         0000 0000 0000 0001 1111 1111 1100 0000

Result =NO^mask

*/