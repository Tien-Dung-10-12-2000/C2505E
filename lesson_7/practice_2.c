#include <stdio.h>

int main()
{
    // Tính tổng điện áp trong mảng bằng con trỏ

    float voltages[7] = {3.45, 2.35, 5.34, 4.25, 3.67, 5.55, 6.34};
    float sum;
    float *ptr = voltages;
    for (int i = 0; i < 7; i++)
    {
        sum += *(ptr + i);
    }
    printf("Sum(voltages) = %.2f", sum);
    return 0;
}
