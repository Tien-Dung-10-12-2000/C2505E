#include <stdio.h>

int findMax(int a, int b)
{
    return a >= b ? a : b;
}

int findMin(int a, int b)
{
    return a >= b ? b : a;
}

int main(int argc, char const *argv[])
{
    int a, b;
    int choice = 0;
    int result;
    while (1)
    {
        printf("Enter a = ");
        scanf("%d", &a);
        printf("Enter b = ");
        scanf("%d", &b);
        while (choice != 1 && choice != 2)
        {
            printf("Mode: 1/ Find Max(a, b) 2/ Find Min(a,b): ");
            scanf("%d", &choice);
            if (choice != 1 && choice != 2)
            {
                printf("Warning: Input 1/2 again!\n");
            }
        }
        switch (choice)
        {
        case 1:
        {
            result = findMax(a, b);
            printf("Max(a, b) = %d\n", result);
            break;
        }
        case 2:
        {
            result = findMin(a, b);
            printf("Min(a, b) = %d\n", result);
            break;
        }
        }
        choice = 0;
        printf("\n");
    }
    return 0;
}
