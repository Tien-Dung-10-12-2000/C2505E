#include <stdio.h>

/**
 * Hàm tính tổng hai số nguyên
 */
int summary(int a, int b)
{

    return a + b;
};

int main()
{
    int a, b;
    while (1)
    {
        printf("Enter a = \n");
        scanf("%d", &a);
        printf("Enter b = \n");
        scanf("%d", &b);
        printf(" a + b = %d\n", summary(a, b));
    }
    return 0;
}
