#include <stdio.h>


int main(void)
{
    char ch;
    printf("enter your charecter - ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("lowercase of %c is %c\n ", ch ,ch+32);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("uppercase of %c is %c\n ", ch ,ch-32);
    }
    else
    {
        printf("%c is a invalid letter\n" , ch);
    }
    
    
    return 0;
}