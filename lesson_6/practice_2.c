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
    int max = numbers[0];
    int min = numbers[0];
    int sum = numbers[0];
    for (int i = 1; i < len; i++)
    {
        int current = numbers[i];
        sum += current;
        if (current >= max)
            max = current;
        if (current <= min)
            min = current;
    }
    printf("Max(...numbers) = %d\n", max);
    printf("Min(...numbers) = %d\n", min);
    printf("Sum(...numbers) = %d\n", sum);

    return 0;
}
