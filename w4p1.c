/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  : YAKSHIT AGGARWAL
Student ID#: 175307214
Email      : YAGGARWAL2@MYSENECA.CA
Section    : NEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

    // DECLARATIONS
    char character;
    int input, j = 1, i;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");

    // MAIN LOOP
    while (j == 1)
    {

        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf("%c%d%*c", &character, &input);

        // DO-WHILE
        if (character == 'D')
        {
            if (input >= 3 && input <= 20)
            {
                printf("DO-WHILE: ");
                i = 0;

                do
                {
                    printf("%c", character);
                    i++;
                }

                while (i < input);
                printf("\n\n");
            }

            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
        }

        // WHILE
        else if (character == 'W')
        {
            if (input >= 3 && input <= 20)
            {
                printf("WHILE   : ");
                i = 0;
                while (i < input)
                {
                    i++;
                    printf("%c", character);
                }
                printf("\n\n");
            }

            else

                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
        }

        // FOR
        else if (character == 'F')
        {
            if (input >= 3 && input <= 20)
            {
                printf("FOR     : ");
                for (i = 0; i < input; i++)
                {

                    printf("%c", character);
                }
                printf("\n\n");
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
        }

        // QUIT
        else if (character == 'Q')
        {
            if (input == 0)
            {
                j = 0;
                printf("\n");
                printf("+--------------------+\n");
                printf("Loop application ENDED\n");
                printf("+--------------------+\n");
                break;
            }
            else
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
        }

        else
        {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
    }

   return 0;

}
