// convert a whole string into a lower case
#include<stdio.h>
void StringLower(char *str)
{
    int i=0;
    while(*str != '\0')
    {
        if((*str>='A')&& (*str<='Z'))
        {
            *str=*str+32;
        }
        str++;

    }
     //ascii value of a is 97 and A is 65 so difference is 32
}

int main()
{
    char Arr[30] ;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    StringLower(Arr);
    printf("string after conversion is :%s",Arr);

    

    return 0;
}