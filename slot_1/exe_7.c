#include <stdio.h>

int main()
{
    /**
     * Tính tổng các số từ 1 đến 10.
     */
    int acc = 0;

    for (int i = 1; i <= 10; i++)
    {
        acc = acc + i;
    }
    printf("Result = %d", acc);

    return 0;
}
