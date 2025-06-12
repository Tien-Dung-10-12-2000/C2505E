#include <stdio.h>

int main()
{
    /**
     * Chớp tắt LED 10 lần với khoảng dừng.
     */
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("LED is OFF\n");
        }
        else
        {
            printf("LED is ON\n");
        }
        int z = 0;
        while (z <= 100000)
        {
            int y = 0;
            while (y <= 100000 / 2)
            {
                y++;
            }
            z++;
        }
    }

    return 0;
}
