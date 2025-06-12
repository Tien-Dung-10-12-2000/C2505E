#include <stdio.h>

int main()
{
    // 2. Kiểm tra nếu điện áp dưới 3V thì in "Pin yếu"
    float u;
    printf("Voltage (u): \n");
    scanf("%d", &u);
    if (u > 3)
    {
        printf("Warning: Low battery !\n");
    }

    return 0;
}
