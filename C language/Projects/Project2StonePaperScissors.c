#include <stdio.h>
#include <time.h>
int main()
{
    int rNum, inp, score = 0;
    int cScore = 0;
    srand(time(0));
    while (1)
    {
        rNum = rand() % 3 + 1;
        printf("Enter stone(1), paper(2), scissors(3) or exit(4): ");
        scanf("%d", &inp);
        if (rNum == inp)
        {
            printf("The match is a tie\n");
        }
        else if (rNum == 1 && inp == 2)
        {
            printf("You won computer choosed stone\n");
            score++;
        }
        else if (rNum == 2 && inp == 3)
        {
            printf("You won computer choosed paper\n");
            score++;
        }
        else if (rNum == 3 && inp == 1)
        {
            printf("You won computer choosed scissors\n");
            score++;
        }
        else if (rNum == 1 && inp == 3)
        {
            printf("You lose computer choosed stone\n");
            cScore++;
        }
        else if (rNum == 2 && inp == 1)
        {
            printf("You lose computer choosed paper\n");
            cScore++;
        }
        else if (rNum == 3 && inp == 2)
        {
            printf("You lose computer choosed scissors\n");
            cScore++;
        }
        else if (inp == 4)
        {
            printf("Computer score => %d\n",cScore);
            printf("Your score => %d\n", score);
            if (cScore > score)
            {
                printf("You lose computer won!\n");
            }
            else if (score > cScore)
            {
                printf("You won compute lose!\n");
            }
            else if (score == cScore)
            {
                printf("The match was a tie!\n");
            }
            sleep(5);
            break;
        }
        else
        {
            printf("Invalid input\n");
        }
    }
    return 0;
}