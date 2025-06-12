#include <stdio.h>

int main()
{
    /**
     * Kiểm tra điện áp đầu vào và hiển thị trạng thái 'Ổn định' hoặc 'Cảnh báo'.
     */
    int u;
    printf("Voltage (u) = \n");
    scanf("%d", &u);

    if (u <= 110 || u > 220)
    {
        printf("Cảnh báo");
    }
    else
    {
        printf("Ổn định");
    }

    return 0;
}
