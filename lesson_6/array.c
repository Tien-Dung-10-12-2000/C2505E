#include <stdio.h>

int main()
{
    const short len = 7;
    int numbers[len];
    for (int i = 0; i < len; i++)
    {
        printf("#%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}
