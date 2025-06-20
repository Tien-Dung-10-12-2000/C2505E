#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("Count = %d", count);
    return 0;
}
