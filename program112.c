// toggle a whole string 
#include<stdio.h>
void StringUpper(char *str)
{
    
    while(*str != '\0')
    {
        if((*str>='a')&& (*str<='z'))
        {
            *str=*str-32;
        }
        else if((*str>='A')&& (*str<='Z'))
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

    StringUpper(Arr);
    printf("string after conversion is :%s",Arr);

    

    return 0;
}