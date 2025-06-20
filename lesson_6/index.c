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
    printf("Enter a = \n");
    scanf("%d", &a);
    printf("Enter b = \n");
    scanf("%d", &b);
    printf(" a + b = %d\n", summary(a, b));
    
    int x, y;
    printf("Enter x = \n");
    scanf("%d", &x);
    printf("Enter y = \n");
    scanf("%d", &y);
    printf(" x + y = %d\n", summary(x, y));
    return 0;
}
