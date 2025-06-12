#include <stdio.h>

int main()
{
    // /**
    //  * For loop
    //  */
    // for (short i = 0; i < 10; i++)
    // {
    //     printf("%d--", i);
    // }
    // printf("\n");
    // /**
    //  * While loop
    //  */
    // short i = 0;
    // while (i <= 9)
    // {
    //     printf("%d--", i);
    //     i++;
    // }
    // printf("\n");
    // /**
    //  * Do-while loop
    //  */
    // short y = 0;
    // do
    // {
    //     printf("%d--", y);
    //     y++;
    // } while (y <= 9);
    // printf("\n");

    // /**
    //  * Infinite loop using while loop
    //  */

    // while (1)
    // {
    //     int x, y;
    //     printf("Calculation sum of two given numbers (x, y)\n");
    //     printf("Enter (x):\n");
    //     scanf("%d", &x);
    //     printf("Enter (y):\n");
    //     scanf("%d", &y);
    //     printf("Sum of (x + y) = %d\n", x + y);
    // }

    while (1)
    {
        printf("Enter an operator (1 = \"+\" | 2 = \"-\" | 3 = \"*\" | 4 = \"/\"):\n");
        int opt;
        scanf("%d", &opt);
        printf("You chose operator = %d\n", opt);
        printf("Print numbers (x, y): \n");
        int x, y;
        scanf("%d", &x);
        scanf("%d", &y);
        int result;

        switch (opt)
        {
        case 1:
        {
            result = x + y;
            printf("%d + %d = %d\n", x, y, result);
            break;
        }
        case 2:
        {
            result = x - y;
            printf("%d - %d = %d\n", x, y, result);
            break;
        }
        case 3:
        {
            result = x * y;
            printf("%d * %d = %d\n", x, y, result);
            break;
        }
        case 4:
        {
            while (y == 0)
            {
                printf("y = 0 is invalid. Enter other value of y: \n");
                scanf("%d", &y);
            }
            float floatResult;
            floatResult = (float)x / (float)y;
            printf("%d / %d = %f\n", x, y, floatResult);
            break;
        }

        default:
        {
            printf("Invalid operator\n");
            break;
        }
            printf("\n");
        }
    }

    return 0;
}
