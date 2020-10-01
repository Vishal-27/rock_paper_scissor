#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i, j, k, user, computer, scoreu, scorec;
    char c, name[50], play;

    printf("Welcome to Rock paper scissor Game: \n \n ");
    printf("Press Y to play the game");
    scanf("%c", &c);
    srand(time(NULL));

    if (c == 'Y' || c == 'y')
    {

      label:  printf("\n\n\n Enter your name here \n\t\n");

        scanf("%s", name);

        printf("Hello %s Welcome to this game so you decided to play this game\n\n\n", name);

        printf("Chose any one of the following choices \n\n\n");
        printf("\t1. Rock \t 2.Scissor  \t 3.Paper");
        scanf("%d", &user);

        computer = rand() % 3;

        if (user == 1)
        {

            switch (computer)
            {

            case 0:
                printf("\n\n\nCompuer chosen rock and you too!!!/n/n/n No one won this round");

                scoreu = 0;
                scorec = 0;
                break;

            case 1:
                printf("\n\n\nComputer chosen scissor and you chosen rock,as a result you won this round!!!");

                scoreu = 1;
                scorec = 0;
                break;

            case 2:
                printf("\n\n\nComputer chosen paper and you chosen rock,as a result computer won this round!!!");

                scoreu = 0;
                scorec = 1;
                break;

            default:
                printf("Program error");
            }
        }

        else if (user == 2)
        {

            switch (computer)
            {

            case 0:
                printf("\n\n\nComputer  choosen rock and you choosen scissor as a result computer won this round!!!");

                scoreu = 0;
                scorec = 1;
                break;

            case 1:
                printf("\n\n\nComputer chosen scissor and you too, as a result no one won this round!!!");

                scoreu = 0;
                scorec = 0;
                break;

            case 2:
                printf("\n\n\nComputer chosen paper and you chosen scissor,as a result you won this round!!!");

                scoreu = 1;
                scorec = 0;
                break;

            default:
                printf("Program error");
            }
        }

        else if (user == 3)
        {

            switch (computer)
            {

            case 0:
                printf("\n\n\nCompuer chosen rock and you choosen paper as a result you won this round!!!");

                scoreu = 1;
                scorec = 0;
                break;

            case 1:
                printf("\n\n\nComputer chosen scissor and you chosen paper,as a result computer won this round!!!");

                scoreu = 0;
                scorec = 1;
                break;

            case 2:
                printf("\n\n\nComputer chosen paper and you too!!! as  a result no one this round");

                scoreu = 0;
                scorec = 0;
                break;

            default:
                printf("Program error");
            }
        }

        for (k = 1; k <= 2; k++)
        {

            printf("\n\n\nChose any one of the following choices \n\n\n");
            printf("\t1. Rock \t 2.Scissor  \t 3.Paper");
            scanf("%d", &user);

            computer = rand() % 3;

            if (user == 1)
            {

                switch (computer)
                {

                case 0:
                    printf("\n\n\nCompuer chosen rock and you too!!!/n/n/n No one won this round");

                    break;

                case 1:
                    printf("\n\n\nComputer chosen scissor and you chosen rock,as a result you won this round!!!");

                    scoreu++;

                    break;

                case 2:
                    printf("\n\n\nComputer chosen paper and you chosen rock,as a result computer won this round!!!");

                    scorec++;
                    break;

                default:
                    printf("Program error");
                }
            }

            else if (user == 2)
            {

                switch (computer)
                {

                case 0:
                    printf("\n\n\nComputer  choosen rock and you choosen scissor as a result computer won this round!!!");

                    scorec++;
                    break;

                case 1:
                    printf("\n\n\nComputer chosen scissor and you too, as a result no one won this round!!!");

                    break;

                case 2:
                    printf("\n\n\nComputer chosen paper and you chosen scissor,as a result you won this round!!!");

                    scoreu++;

                    break;

                default:
                    printf("Program error");
                }
            }

            else if (user == 3)
            {

                switch (computer)
                {

                case 0:
                    printf("\n\n\nCompuer chosen rock and you choosen paper as a result you won this round!!!");

                    scoreu++;

                    break;

                case 1:
                    printf("\n\n\nComputer chosen scissor and you chosen paper,as a result computer won this round!!!");

                    scorec++;
                    break;

                case 2:
                    printf("\n\n\nComputer chosen paper and you too!!! as  a result no one this round");

                    break;

                default:
                    printf("Program error");
                }
            }
        }

        printf("\n\n\nYour score is %d\n\n\nComputer's score is %d", scoreu, scorec);

        if (scoreu > scorec)
        {

            printf("\n\nCongratulations You won this match!!!!!");
        }

        else
        {

            printf("\n\n\nComputer won this match better luck next time");
        }

        printf("\n\n\n\nPress y to play this game again");
        scanf("%c", &play);

        if (c == 'y' || c == 'Y')
        {

            goto label;
        }
        else
        {
            void exit(int);
        }
    }

    else
    {

        printf("\n\n\nYou have decided not to play this game");
    }
}
