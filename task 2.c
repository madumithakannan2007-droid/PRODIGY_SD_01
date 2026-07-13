#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, count = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        count++;

        if(guess < number)
            printf("Too Low\n");
        else if(guess > number)
            printf("Too High\n");
        else
            printf("Correct!\n");

    } while(guess != number);

    printf("Attempts = %d", count);

    return 0;
}
