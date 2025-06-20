#include <stdio.h>

int main()
{
    /**
     * -----------[----------]-----------[---------]-----------> (Celsius)
     * Cảnh báo   0    Tắt   15   Bật    30  Tắt   50  Cảnh báo
     */

    int temp;
    while (1)
    {
        printf("Continue ? : 0 = No (exit) | 1  = Yes\n");
        int n = 0;
        scanf("%d", &n);
        switch (n)
        {
        case 0:
            return 0;
        case 1:
        default:
        {
            printf("Input temperature in Celsius: \n");
            scanf("%d", &temp);
            switch (temp)
            {
            case 0 ... 15:
            case 30 ... 50:
                printf("Off the light\n");
                break;
            case 16 ... 29:
                printf("On the light\n");
                break;
            default:
                printf("Warning: Temperature\n");
                break;
            }

            /**
             * Use if else if statement
             */
            // if (temp < 0 || temp > 50)
            // {
            //     printf("Warning: Temperature\n");
            // }
            // else if ((temp >= 0 && temp <= 15) || (temp >= 30 && temp <= 50))
            // {
            //     printf("Off the light\n");
            // }
            // else if (temp > 15 && temp < 30)
            // {
            //     printf("On the light\n");
            // }
        }
        }
    }

    return 0;
}
