// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number; // Random numbers
    int guess;  // input number by user
    int nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 to 100
    printf("The random number is:%d\n", number);
    do
    {
        printf("Please guess the number between (1 to 100): ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("\nCongratulation! You Guessed it Right.\n");
            printf("You guess it in %d attempts\n", nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}