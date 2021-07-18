#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("------------------------------------------------------------------------------\n");
    
    int rNum, inp, tries = 1;
    srand(time(0));
    rNum = rand() % 25 + 1;
    printf("Guess the random number from 1 to 25: ");
    while (1)
    {
        scanf("%d", &inp);
        if (inp < rNum)
        {
            printf("Guess a higher number please!: ");
            tries++;
        }
        else if (inp > rNum)
        {
            printf("Guess a lower number please!: ");
            tries++;
        }
        else if (inp == rNum)
        {
            printf("You guessed it correct! in %d attempts", tries);
            break;
        }
        else
        {
            printf("Invalid input!");
        }
    }
    printf("\n--------------------------------------------------------------------");
    return 0;
}