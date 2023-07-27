// convert upper to lower and vice versa 

#include<stdio.h>
char ToUpperX(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch - 32; 
    }
    else if(ch>='A' && ch<='Z')
    {
        return ch+32;
    }
    else
    {
        return ch;
    }
     //ascii value of a is 97 and A is 65 so difference is 32
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);

    printf("Character in the toggle case is : %c\n",cRet);

    return 0;
}