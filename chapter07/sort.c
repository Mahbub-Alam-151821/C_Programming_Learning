#include <stdio.h>

int main(void)
{
    int numbers[] = {2, 4, 1, 8, 9, 5, 6, 12, 8, 10, 11, 3, 7, 13, 15, 19, 16, 18};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int i, j, temp;
    // sorting logic
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    // print
    for (i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // int a = 10;F
    // int b = 20;
    // int temp = a;
    // a = b;
    // b = temp;
    // printf("A = %d and B = %d\n", a,b);
    printf("Hello World!");
    return 0;
}
