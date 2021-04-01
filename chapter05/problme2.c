#include <stdio.h>

int main(void)
{
    int n;
    printf("enter the value of n - ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("n is a even number");
    }
    else
    {
        printf("n is a odd number");
    }

    return 0;
}
