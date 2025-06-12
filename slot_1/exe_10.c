#include <stdio.h>

int main()
{
    /**
     * Đếm và in các số chia hết cho 3 từ 1 đến 30.
     */
    for (int i = 1; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
