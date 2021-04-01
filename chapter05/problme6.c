#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    int picked_number , given_number;
    time_t t;

    srand((unsigned)time(&t));
    picked_number = rand() % 10 + 1;

    printf("enter your choosen number - ");
    scanf("%d", &given_number);

    if (given_number == picked_number)
    {
    printf("You Win!!!\n");
    }
    else
    {
        printf("You Lose ,picked number was -%d\n" , picked_number);
        
    }
    
    


    return 0;
}
