#include <stdio.h>
int main()
{
    int numbers[7] = {58, 14, 56, 33, 68, 25, 23};
    for (int j = 7; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (i < j - 1 && numbers[i] < numbers[i + 1])
            {
                printf("#%d-(%d-%d)\n", j, i, i + 1);
                for (int x = 0; x < 7; x++)
                {
                    printf("%d ", numbers[x]);
                }
                printf("\n");
                int temp = numbers[i + 1];
                numbers[i + 1] = numbers[i];
                numbers[i] = temp;
                for (int x = 0; x < 7; x++)
                {
                    printf("%d ", numbers[x]);
                }
                printf("\n\n");
            }
        }
    }
    return 0;
}
