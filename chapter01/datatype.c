#include <stdio.h>

int main()
{
    int num = 45;
    float num2 = 55.5f;
    char cr = 'T';

    printf("%d\n",num);
    printf("%f\n",num2);
    printf("%c\n",cr);

    num=num2;
    printf("%d\n",num);

    float a=151.214f;
    float b=821.321f;
    printf("%f + %f = %f\n", a, b, a+b);
    printf("%f - %f = %f\n", a, b, a-b);
    printf("%f * %f = %f\n", a, b, a*b);
    printf("%f / %f = %f\n", a, b, a/b);
    
    return 0;
}

//number
//integer(10,20,30,151821)  ,float (3.3333  , 2.50)

//text
//character '%' 'a' 'A'
//Boolean
//Costom Type