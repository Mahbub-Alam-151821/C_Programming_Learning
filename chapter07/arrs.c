#include <stdio.h>

int main(void)
{
    int rolls[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13,12, 15, 17, 12, 18, 22, 45};
    int length = sizeof(rolls) / sizeof(rolls[0]);
    int search;
    int is_found = -1;

    printf("Enter search key: ");
    scanf("%d", &search);
    int i;

    for (i = 0; i < length; i++)
    {
        if (rolls[i] == search)
        {
            is_found = i;
            // break;
        }
    }
    if (is_found == -1)
    {
        printf("item not found!");
    }
    else
    {
        printf("item found at index %d\n", is_found);
    }

    // printf("%d",length);

    return 0;
}
