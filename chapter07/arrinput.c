#include <stdio.h>

int main(void)
{
    int i, size, sum, avg, max;

    printf("Enter your array length size: ");
    scanf("%d", &size);

    int nums[size];

    printf("input\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    sum = 0;
    max = nums[0];
    for (i = 0; i < size; i++)
    {
        // printf("%d\t", nums[i]);
        sum += nums[i];
        if (max < nums[i])
        {
            max = nums[i];
        }
    }
    avg = sum / size;
    printf("sum =%d\n", sum);
    printf("Avg =%d\n", avg);
    printf("Max =%d\n", max);

    printf("\n");

    return 0;
}
