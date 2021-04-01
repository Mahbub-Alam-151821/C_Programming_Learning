#include <stdio.h>

int main(void)
{
    int scores[7];

    scores[0] = 80;
    scores[1] = 84;
    scores[2] = 89;
    scores[3] = 85;
    scores[4] = 90;
    scores[5] = 95;
    scores[6] = 99;

    // int number[]={89,88,98,99,90,85,87,82,83,96,99};
    // int length = sizeof(scores) / sizeof(scores[0]);
    // printf("Size of number array is -%d", length);

    printf("%u\n",(unsigned int)&scores);
    printf("%u\n",(unsigned int)&scores[0]);
    printf("%u\n",(unsigned int)&scores[1]);
    printf("%u\n",(unsigned int)&scores[2]);
    printf("%u\n",(unsigned int)&scores[3]);
    printf("%u\n",(unsigned int)&scores[4]);
    printf("%u\n",(unsigned int)&scores[5]);
    printf("%u\n",(unsigned int)&scores[6]);
    // find sum
    int sum = 0, i;

    for (i = 0; i <= 6; i++)
    {
        sum += scores[i];
    }
    printf("sum = %d\n", sum);

    // average
    printf("average = %d\n", sum / 7);

    // max
    int max = scores[0];
    for (i = 0; i < 7; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
        }
    }
    printf("Max = %d\n", max);

    return 0;
}