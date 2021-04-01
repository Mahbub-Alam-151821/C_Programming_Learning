#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter value of a - ");
    scanf("%d", &a);

    printf("Enter value of b - ");
    scanf("%d", &b);

    printf("Enter value of c - ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is greater than b and c\n");
        if (b > c)
        {
            printf("b is greater than c");
        }
        else if (b < c)
        {
            printf("c is greater than b");
        }
        else
        {
            printf("they are equal");
        }
    }
    else if (b > a && b > c)
    {
        printf("b is gerater than a and c\n");
        if (a > c)
        {
            printf("a is greater than c");
        }
        else if (a < c)
        {
            printf("c is greater than a");
        }
        else
        {
            printf("they are equal");
        }
    }
    else if (c > a && c > b)
    {
        printf("c is gerater than a and b\n");
        if (b > a)
        {
            printf("b is greater than a");
        }
        else if (b < a)
        {
            printf("a is greater than b");
        }
        else
        {
            printf("they are equal");
        }
    }
    else
    {
        printf("they are equal");
    }

    return 0;
}
