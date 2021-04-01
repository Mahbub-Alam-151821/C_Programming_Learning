#include <stdio.h>

int main(void)
{
    int i, j, rows ;

    printf("Enter row number - ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }



    printf("\n\n");

    for ( i = 0; i < rows; i++)
    {
        for ( j = i + 1; j < rows; j++)
        {
            printf("  ");
        }
        for ( j = 0; j < (2 * i) -1; j++)
        {
            printf("S ");
        }
        
        printf("\n");
    }
    

    return 0;
}
