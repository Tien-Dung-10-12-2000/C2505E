#include <stdio.h>

int main()
{
    float tem;
    float avg = 0;
    int i = 1;
    int count = 10;
    while (i <= count)
    {
        printf("#%d: \n", i);
        scanf("%f", &tem);
        avg += tem;
        i++;
    }
    printf("Avg = %.2f\n", avg / count);
    return 0;
}
