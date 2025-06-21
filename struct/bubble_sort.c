#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count = 7;
    int numbers[7] = {32, 48, 54, 50, 42, 30, 61};

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (numbers[i] < numbers[j])
            {
                printf("#%d-%d\n", i, j);
                for (int x = 0; x < count; x++)
                {
                    printf("%d ", numbers[x]);
                }
                printf("\n");
                int temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
                for (int i = 0; i < count; i++)
                {
                    printf("%d ", numbers[i]);
                }
                printf("\n");
                printf("\n");
            }
        }
    }
    return 0;
}
