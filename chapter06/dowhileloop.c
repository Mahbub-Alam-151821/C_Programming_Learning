#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) 
{
    // int n = 5;
    // do
    // {
    //     printf("i miss you\n");
    // } while (n < 5);

    time_t t;
    srand((unsigned)time(&t));

    int chosen_number, chance = 3;
    bool is_loss = true;
    int lucky_number = rand() % 20 + 1;

    do
    {
        printf("Guess The Lucky Number (%d): \n",chance);
        scanf("%d", &chosen_number);

        if (lucky_number == chosen_number)
        {
            printf("Congratulation! you choose the correct number\n");
            is_loss = false;
            break;
        }

        if (chosen_number < lucky_number)
        {
           printf("Your chosen number is small\n");
        }
        else
        {
            printf("Your chosen number is big\n");
        }
        
        

      

        chance--;
    }while (chance > 0);
    if (is_loss)
    {
        printf("You lose.The Number was %d\n", lucky_number);
    }
    return 0;
}
