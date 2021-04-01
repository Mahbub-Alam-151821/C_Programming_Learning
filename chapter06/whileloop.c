#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i <= 100)
    {
        printf("%d  I Love You ORU!\n", i);
        i++;
    }

    int a, b;
    char ch = 'c';

    while (ch != 'q')
    {
        printf("Enter two number(a and b): \n");
        scanf("%d %d", &a, &b);
        printf("Result=%d\n", a + b);
        printf("To continue enter 'c'.To quit enter 'q'.\n");
        scanf(" %c", &ch);
    }

    int j;
    for (j = 0; j < 100; j++)
    {
        // if (i == 5)
        // {
        //     break;
        // }

        if (i % 3 == 0 || i % 5 == 0 || i % 6 == 0)
        {
            continue;
        }

        printf("I = %d\n", i);
    }

    return 0;
}
