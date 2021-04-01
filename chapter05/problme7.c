#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    time_t t;
    srand((unsigned)time(&t));

    int chosen_number, chance = 3;
    bool is_loss = true;
    int lucky_number = rand() % 10 + 1;

    while (chance > 0)
    {
        printf("Guess The Lucky Number (%d): \n",chance);
        scanf("%d", &chosen_number);

        if (lucky_number == chosen_number)
        {
            printf("Congratulation! you choose the correct number\n");
            is_loss = false;
            break;
        }

        // if (lucky_number != chosen_number)
        // {
        //     printf("You lose. Try again!\n");
        //     printf("The Number was %d\n", lucky_number);
        // }

        chance--;
    }
    if (is_loss)
    {
        printf("You lose.The Number was %d\n", lucky_number);
    }
    

    return 0;
}
