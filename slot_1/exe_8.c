#include <stdio.h>

int main()
{
    /**
     * In ra các số chẵn từ 2 đến 20
     */
    int acc = 0;

    for (int i = 2; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
