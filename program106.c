
#include<stdio.h>
// drawback if char is not alphabet the code is damaged
char ToUpperX(char ch)
{
    return ch - 32;  //ascii value of a is 97 and A is 65 so difference is 32
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);

    printf("Character in the upper case is : %c\n",cRet);

    return 0;
}